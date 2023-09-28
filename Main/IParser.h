#pragma once
#include "Shape.h"
#include <string>


/*
** Interface for Shape Parser 
*/
class IParser
{
private:

public:
	/// <summary>
	/// virtual function, see concrete functionm for more info
	/// </summary>
	/// <param name="data">an original line of data</param>
	/// <returns>shared_ptr of concrete ShapeParser or nullptr</returns>
	virtual std::shared_ptr<Shape> parse(std::string) noexcept(false) = 0;
};