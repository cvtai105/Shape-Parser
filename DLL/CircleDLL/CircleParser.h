#pragma once
#include "IParser.h"

class CircleParser : public IParser
{
public:
	/// <summary>
	/// parser of circle
	/// </summary>
	/// <param name="data">an original line of data</param>
	/// <returns>shared_ptr of CirclePareser or nullptr</returns>
	std::shared_ptr<Shape> parse(std::string data) override;
};

