#pragma once
#include "IParser.h"

class EllipseParser : public IParser
{
public:
	/// <summary>
	/// parser of ellipse
	/// </summary>
	/// <param name="data">an original line of data</param>
	/// <returns>shared_ptr of EllipseParser or nullptr</returns>
	std::shared_ptr<Shape> parse(std::string data) override;
};

