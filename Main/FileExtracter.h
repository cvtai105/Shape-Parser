#pragma once
#include "Shape.h"
#include "ParserFactory.h"
#include "IParser.h"
#include <vector>
#include <string>
#include <fstream>
#include <exception>
#include "DLLoader.h"

/// <summary>
/// read file, parse data, print result, store data
/// </summary>
class FileExtracter
{
private:

	std::vector<std::shared_ptr<Shape>> _shapesList;
	int _unreadableCount;

public:
	FileExtracter();

public:

	/// <summary>
	/// read file shapes.txt, 
	/// Load neccessary .dll that handled by vHandleDLL
	/// store data into _shapesList
	/// print result 
	/// </summary>
	/// <param name="filedata">data file: shapes.txt in this project</param>
	/// <param name="vHandleDLL">vector of DLLoader that handle .dll file</param>
	void read(const std::string filedata, std::vector<dlloader::DLLoader<IParser>> vHandleDLL) noexcept(false);

	/// <summary>
	/// Sort _shapeList by area ascendingly
	/// </summary>
	void sortByArea();

	/// <summary>
	/// print properties, perimeter, area as table to console
	/// </summary>
	void printWithTableList();


public:
	//getter
	const std::vector<std::shared_ptr<Shape>> shapesList() const;
	int unreadableCount();

	//setter
	void setList(std::vector<std::shared_ptr<Shape>> list);
	void setUnreadableCount(int);

};


