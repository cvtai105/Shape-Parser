#include "pch.h"
#include "RhombusParser.h"
#include "Rhombus.h"
#include <regex>

extern "C"
{
    __declspec (dllexport) RhombusParser* allocator()
    {
        return new RhombusParser();
    }

    __declspec (dllexport) void deleter(RhombusParser* ptr)
    {
        delete ptr;
    }
}


std::shared_ptr<Shape> RhombusParser::parse(std::string data) {
    std::regex pattern("Rhombus: d1=([0-9.]+), d2=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float diagonal1 = stof(matches[1].str());
        float diagonal2 = stof(matches[2].str());

        return std::make_shared<Rhombus>(Rhombus(diagonal1, diagonal2));
    }
    else {
        throw std::runtime_error("No matches found.");
    }



}