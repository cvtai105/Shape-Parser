#include "pch.h"
#include "RhombusPrinter.h"
#include "Rhombus.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintRhombusWithCalculatedProperties::print( Shape* p) {
    const Rhombus* s = dynamic_cast<const Rhombus*> (p);

    std::string str1 = std::to_string(s->diagonal1());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string str2 = std::to_string(s->diagonal2());
    str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
    str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Truc 1=" + str1 + ", Truc 2=" + str2;

    std::cout << " | " << std::setw(15) << std::left << "Hinh thoi" << " | "
        << std::setw(30) << std::left << sProperties
        << " | " << "Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << "Dien tich=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |";
}

void PrintRhombusWithRawProperties::print( Shape* p) {
    const Rhombus* s = dynamic_cast<const Rhombus*> (p);

    std::string str1 = std::to_string(s->diagonal1());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string str2 = std::to_string(s->diagonal2());
    str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
    str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Truc 1=" + str1 + ", Truc 2=" + str2;
    std::cout << "Hinh thoi: " << sProperties;
}
