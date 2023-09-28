#pragma once
#include <memory>
#include "IPrint.h"

/// <summary>
/// shape base class, had-a IPint
/// </summary>
class Shape
{
protected:
	std::unique_ptr<IPrint> _printer;
public:
	Shape();
public:
	//setter
	void setPrinter(std::unique_ptr<IPrint> printer_);

public:

	/// <summary>
	/// caculate area
	/// </summary>
	/// <returns>area of concrete shape </returns>
	virtual double getArea() const = 0;

	/// <summary>
	/// calculate perimeter
	/// </summary>
	/// <returns>perimeter of concrete shape</returns>
	virtual double getPerimeter() const = 0;

	/// <summary>
	/// print result after parse
	/// </summary>
	virtual void printWithRawProperties() = 0;

	/// <summary>
	/// print detail infomation as table
	/// </summary>
	virtual void printWithCalculatedProperties() = 0;
};






