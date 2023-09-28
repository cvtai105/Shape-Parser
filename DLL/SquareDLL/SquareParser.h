#pragma once
#include "IParser.h"

class SquareParser : public IParser
{
public:
	/// <summary>
	/// parser of Square
	/// </summary>
	/// <param name="data">an original line of data</param>
	/// <returns>shared_ptr of EllipseParser or nullptr</returns>
	std::shared_ptr<Shape> parse(std::string data) override;
};

