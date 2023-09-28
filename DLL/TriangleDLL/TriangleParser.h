#pragma once
#include "IParser.h"

class TriangleParser : public IParser
{
public:
	/// <summary>
	/// parse triangle data line
	/// </summary>
	/// <param name="data">an original line of data</param>
	/// <returns>shared_ptr of EllipseParser or nullptr</returns>
	std::shared_ptr<Shape> parse(std::string data) override;
};

