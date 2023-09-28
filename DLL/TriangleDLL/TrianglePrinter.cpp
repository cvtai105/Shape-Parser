
#include "pch.h"
#include "TrianglePrinter.h"
#include "Triangle.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintTriangleWithCalculatedProperties::print( Shape* p) {
    const Triangle* s = dynamic_cast<const Triangle*> (p);

    //format
    std::string str1 = std::to_string(s->edgeA());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string str2 = std::to_string(s->edgeB());
    str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
    str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);

    std::string str3 = std::to_string(s->edgeC());
    str3.erase(str3.find_last_not_of('0') + 1, std::string::npos);
    str3.erase(str3.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Canh A=" + str1 + ", Canh B=" + str2 + ", Canh C=" + str3;

    std::cout << " | " << std::setw(15) << std::left << "Hinh tam giac" << " | "
        << std::setw(30) << std::left << sProperties
        << " | " << "Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << "Dien tich=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |" ;
}

void PrintTriangleWithRawProperties::print( Shape* p) {
    const Triangle* s = dynamic_cast<const Triangle*> (p);
    //format
    std::string str1 = std::to_string(s->edgeA());
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

    std::string str2 = std::to_string(s->edgeB());
    str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
    str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);

    std::string str3 = std::to_string(s->edgeC());
    str3.erase(str3.find_last_not_of('0') + 1, std::string::npos);
    str3.erase(str3.find_last_not_of('.') + 1, std::string::npos);

    std::string sProperties = "Canh A=" + str1 + ", Canh B=" + str2 + ", Canh C=" + str3;
    std::cout << "Hinh tam giac: " << sProperties;
}
