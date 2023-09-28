
#include "pch.h"
#include "TriangleParser.h"
#include "Triangle.h"
#include <regex>

extern "C"
{
    __declspec (dllexport) TriangleParser* allocator()
    {
        return new TriangleParser();
    }

    __declspec (dllexport) void deleter(TriangleParser* ptr)
    {
        delete ptr;
    }   
}


std::shared_ptr<Shape>  TriangleParser::parse(std::string data) {
    std::regex pattern("Triangle: a=([0-9.]+), b=([0-9.]+), c=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float sideA = stof(matches[1].str());
        float sideB = stof(matches[2].str());
        float sideC = stof(matches[3].str());

        if (sideA + sideB <= sideC || sideB + sideC <= sideA || sideA + sideC <= sideB) {
            throw std::exception("Not three side of a triangle");
        }

        return std::make_shared<Triangle>(Triangle(sideA, sideB, sideC));
    }
    else {
        throw std::runtime_error("No matches found.");
    }



}