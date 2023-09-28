#include "pch.h"
#include "Ellipse.h"
#include "EllipsePrinter.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintEllipseWithCalculatedProperties::print( Shape* p) {
    const myellipse::Ellipse* s = dynamic_cast<const myellipse::Ellipse*> (p);

    std::string str1 = std::to_string(s->minorAxis());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string str2 = std::to_string(s->majorAxis());
    str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
    str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Truc nho=" + str1 + ", Truc lon=" + str2;

    std::cout << " | " << std::setw(15) << std::left << "Hinh Ellipse" << " | "
        << std::setw(30) << std::left << sProperties
        << " | " << "Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << "Dien tich=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |";
}

void PrintEllipseWithRawProperties::print( Shape* p) {
    const myellipse::Ellipse* s = dynamic_cast<const myellipse::Ellipse*> (p);
    std::string str1 = std::to_string(s->minorAxis());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string str2 = std::to_string(s->majorAxis());
    str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
    str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Truc nho=" + str1 + ", Truc lon=" + str2;
    std::cout << "Hinh Ellipse: " << sProperties;
}
