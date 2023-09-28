#include"pch.h"
#define _USE_MATH_DEFINES
#include "Ellipse.h"
#include "EllipsePrinter.h"
#include <cmath>

using namespace myellipse;

Ellipse::Ellipse() {
    _minorAxis = 0;
    _majorAxis = 0;
}

Ellipse::Ellipse(double a, double b) {
    this->_minorAxis = a;
    this->_majorAxis = b;
}

double Ellipse::getArea() const {
    return M_PI * _minorAxis * _majorAxis;
}

double Ellipse::getPerimeter() const {
    double h = pow((_minorAxis - _majorAxis), 2) / pow((_minorAxis + _majorAxis), 2);
    return M_PI * (_minorAxis + _majorAxis) * (1 + (3 * h) / (10 + sqrt(4 - 3 * h)));
}


void Ellipse::setMinorAxis(double value) {
    _minorAxis = value;
}
void Ellipse::setMajorAxis(double value) {
    _majorAxis = value;
}

double Ellipse::minorAxis() const {
    return _minorAxis;
}
double Ellipse::majorAxis() const {
    return _majorAxis;
}

void Ellipse::printWithRawProperties() {
    setPrinter(std::make_unique<PrintEllipseWithRawProperties>());
    if (_printer) {
        _printer->print(this);
    }
}
void Ellipse::printWithCalculatedProperties() {
    setPrinter(std::make_unique<PrintEllipseWithCalculatedProperties>());
    if (_printer) {
        _printer->print(this);
    }
}