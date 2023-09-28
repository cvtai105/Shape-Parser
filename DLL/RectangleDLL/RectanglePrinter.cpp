
#include "pch.h"
#include "RectanglePrinter.h"
#include "Rectangle.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintRectangleWithCalculatedProperties::print( Shape* p) {
    const myrectangle::Rectangle* s = dynamic_cast<const myrectangle::Rectangle*> (p);

    std::string str1 = std::to_string(s->width());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string str2 = std::to_string(s->height());
    str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
    str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);
    
    
    std::string sProperties = "Rong=" + str1 + ", Cao=" + str2;

    std::cout << " | " << std::setw(15) << std::left << "Hinh chu nhat" << " | "
        << std::setw(30) << std::left << sProperties
        << " | " << "Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << "Dien tich=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |";
}

void PrintRectangleWithRawProperties::print( Shape* p) {
    const myrectangle::Rectangle* s = dynamic_cast<const myrectangle::Rectangle*> (p);

    std::string str1 = std::to_string(s->width());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string str2 = std::to_string(s->height());
    str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
    str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);


    std::string sProperties = "Rong=" + str1 + ", Cao=" + str2;
    std::cout << "Hinh chu nhat: " << sProperties;
}
