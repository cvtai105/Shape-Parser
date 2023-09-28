#include "pch.h"
#include "EllipseParser.h"
#include "Ellipse.h"
#include <regex>


extern "C"
{
    __declspec (dllexport) EllipseParser* allocator()
    {
        return new EllipseParser();
    }

    __declspec (dllexport) void deleter(EllipseParser* ptr)
    {
        delete ptr;
    }
}

std::shared_ptr<Shape>  EllipseParser::parse(std::string data) {
    std::regex pattern("Ellipse: a=([0-9.]+), b=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        double minorAxis = stod(matches[1].str());
        double majorAxis = stod(matches[2].str());

        return std::make_shared<myellipse::Ellipse>(myellipse::Ellipse(minorAxis, majorAxis));
        
    }
    else {
        throw std::runtime_error("No matches found.");
    }



}