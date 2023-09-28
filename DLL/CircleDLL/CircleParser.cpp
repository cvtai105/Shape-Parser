
#include "pch.h"
#include "CircleParser.h"
#include "Circle.h"
#include <regex>


extern "C"
{
	__declspec (dllexport) CircleParser* allocator()
	{
		return new CircleParser();
	}

	__declspec (dllexport) void deleter(CircleParser* ptr)
	{
		delete ptr;
	}
}


std::shared_ptr<Shape> CircleParser::parse(std::string data) {
	std::regex pattern("Circle: r=([0-9.]+)");
	std::smatch matches;

    
    if (std::regex_search(data, matches, pattern)) {
        float radius = stof(matches[1].str());
        return std::make_shared<Circle>(Circle(radius));
    }
    else {
        throw std::runtime_error("Circle data error.");
    }
}