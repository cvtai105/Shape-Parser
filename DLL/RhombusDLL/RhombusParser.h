#pragma once
#include "IParser.h"

class RhombusParser : public IParser
{
public:
	/// <summary>
	/// parser of Rhombus
	/// </summary>
	/// <param name="data">an original line of data</param>
	/// <returns>shared_ptr of EllipseParser or nullptr</returns>
	std::shared_ptr<Shape> parse(std::string data) override;
};

