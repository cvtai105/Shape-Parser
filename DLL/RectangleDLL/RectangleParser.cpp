#include "pch.h"
#include "RectangleParser.h"
#include "Rectangle.h"
#include <regex>


extern "C"
{
    __declspec (dllexport) RectangleParser* allocator()
    {
        return new RectangleParser();
    }

    __declspec (dllexport) void deleter(RectangleParser* ptr)
    {
        delete ptr;
    }
}

#define _WINDOWS_

std::shared_ptr<Shape> RectangleParser::parse(std::string data) {
    std::regex pattern("Rectangle: w=([0-9.]+), h=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        double width = stod(matches[1].str());
        double height = stod(matches[2].str());

        return std::make_shared<myrectangle::Rectangle>(myrectangle::Rectangle(width, height));
    }
    else {
        throw std::runtime_error("No matches found.");
    }



}