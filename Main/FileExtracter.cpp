#include "FileExtracter.h"
#include <algorithm>
#include <iostream>
#include <iomanip>
#include "IParser.h"


FileExtracter::FileExtracter() {
	_unreadableCount = 0;
}

void FileExtracter::read(const std::string filedata, std::vector<dlloader::DLLoader<IParser>> vHandleDLL) {


	//open shapes.txt
	std::ifstream txtfile;
	txtfile.open(filedata);
	if (!txtfile.is_open()) {
		throw std::exception("Can not open file!\n");
	}	
	
	ParserFactory* pf = ParserFactory::getInstance();

	//before using dll
	//pf->registerWith("Circle", std::make_shared<CircleParser>(CircleParser()));
	//pf->registerWith("Square", std::make_shared<SquareParser>(SquareParser()));
	//pf->registerWith("Triangle", std::make_shared<TriangleParser>(TriangleParser()));
	//pf->registerWith("Rectangle", std::make_shared<RectangleParser>(RectangleParser()));
	//pf->registerWith("Rhombus", std::make_shared<RhombusParser>(RhombusParser()));
	//pf->registerWith("Ellipse", std::make_shared<EllipseParser>(EllipseParser()));

	std::string line;
	std::shared_ptr<IParser> pser;
	int count = 0;

	std::cout << "Dang doc tap tin shapes.txt...";
	while(std::getline(txtfile, line)){

		//get type of shape
		std::string name;
		size_t pos = line.find_first_of(':');
		if (pos == std::string::npos) {
			_unreadableCount++;
			continue;
		}
		name = line.substr(0, pos);
		
		//ask if factory have type of shape
		pser = pf->select(name);
		if (nullptr == pser) { //name has not registed yet

			//dll file name
			std::string dllfile = name + "DLL.dll";

			//try to load new shape
			dlloader::DLLoader<IParser> dlloader(dllfile);
			if (!dlloader.DLOpenLib()) { //if load fail, shape is not exists
				++_unreadableCount;
				continue;
			}
			else {

				//regist to factory, push handler into vector, get shape
				pf->registerWith(name, dlloader.DLGetInstance());
				vHandleDLL.push_back(dlloader);
				pser = pf->select(name);
			}

		}

		try
		{
			_shapesList.push_back(pser->parse(line));
		}
		catch (const std::exception&)
		{
			_unreadableCount++;
			continue;
		}
		count++;
		std::cout << std::endl << count << ". ";
		_shapesList[count - 1]->printWithRawProperties();

	}
	std::cout << "\nTim thay " << _shapesList.size() << " hinh / " << _shapesList.size() + _unreadableCount << " hinh";
	std::cout << "\nKhong the doc duoc: " << _unreadableCount << " hinh.";


	txtfile.close();
}

void FileExtracter::sortByArea(){
	
	std::sort(_shapesList.begin(), _shapesList.end(), [](std::shared_ptr<Shape>& a, std::shared_ptr<Shape>& b) { return a->getArea() < b->getArea(); });
}
void FileExtracter::printWithTableList() {

	size_t count = _shapesList.size();

	for (int i = 0; i < count; i++ ) {
		std::cout <<"| " <<std::setw(2)<< std::left<< i + 1;
		_shapesList[i]->printWithCalculatedProperties();
		std::cout << std::endl;
	}
}


const std::vector<std::shared_ptr<Shape>> FileExtracter::shapesList() const {
	return _shapesList;
}

int FileExtracter::unreadableCount() {
	return _unreadableCount;
}

void FileExtracter::setList(std::vector<std::shared_ptr<Shape>> list) {
	_shapesList = list;
}
void FileExtracter::setUnreadableCount(int value) {
	_unreadableCount = value;
}


