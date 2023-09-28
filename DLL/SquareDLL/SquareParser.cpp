#include "pch.h"
#include "SquareParser.h"
#include "Square.h"
#include <regex>


extern "C"
{
    __declspec (dllexport) SquareParser* allocator()
    {
        return new SquareParser();
    }

    __declspec (dllexport) void deleter(SquareParser* ptr)
    {
        delete ptr;
    }
}

std::shared_ptr<Shape> SquareParser::parse(std::string data) {
    std::regex pattern("Square: a=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float edge = stof(matches[1].str());


        return std::make_shared<Square>(Square(edge));
    }
    else {
        throw std::runtime_error("No matches found.");
    }
}