#include <iostream>
#include "ParserFactory.h"
#include "IParser.h"
#include "Shape.h"
#include "FileExtracter.h"
#include <memory>
#include <string>



//"Microsoft requires a bit of non - standard set - up with _setmode() before wcout or wcin can work."
//vì vậy em sẽ không dùng wstring như trong đồ án thể hiện

int main() {
	const std::string filename = "shapes.txt";
	std::vector<dlloader::DLLoader<IParser>> vHandleDLL;
	FileExtracter reader;

	try
	{
		reader.read(filename, vHandleDLL);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what();
		return 1;
	}
	
	reader.sortByArea();
	std::cout << std::endl << std::endl;

	reader.printWithTableList();

	//close file
	for (int i = 0; i < vHandleDLL.size(); i++) {
		vHandleDLL[i].DLCloseLib();
	}

	std::cin.get();
	return 1;
}