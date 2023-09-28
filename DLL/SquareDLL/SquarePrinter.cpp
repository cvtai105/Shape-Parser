#include "pch.h"
#include "SquarePrinter.h"
#include "Square.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintSquareWithCalculatedProperties::print( Shape* p) {
    const Square* s = dynamic_cast<const Square*> (p);

    std::string str1 = std::to_string(s->edge());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Canh=" + str1;

    std::cout << " | " << std::setw(15) << std::left << "Hinh vuong" << " | "
        << std::setw(30) << std::left << sProperties
        << " | " << "Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << "Dien tich=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |";
}

void PrintSquareWithRawProperties::print( Shape* p) {
    const Square* s = dynamic_cast<const Square*> (p);
    std::string str1 = std::to_string(s->edge());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Canh=" + str1;
    std::cout << "Hinh vuong: " << sProperties;
}
