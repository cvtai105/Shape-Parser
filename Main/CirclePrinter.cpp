
#include "pch.h"
#include "CirclePrinter.h"
#include "Circle.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintCircleWithCalculatedProperties::print( Shape* p) {
    const Circle* s = dynamic_cast<const Circle*> (p);

    std::string str1 = std::to_string(s->radius());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Ban kinh =" + str1;

    std::cout << " | " << std::setw(15) << std::left << "Hinh tron" << " | "
        << std::setw(30) << std::left << sProperties
        << " | " << "Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << "Dien tich=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |";
}

void PrintCircleWithRawProperties::print( Shape* p) {
    const Circle* s = dynamic_cast<const Circle*> (p);

    std::string str1 = std::to_string(s->radius());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Ban kinh =" + str1;
    std::cout << "Hinh tron: " << sProperties;
}
