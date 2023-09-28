

#include "pch.h"

#define _USE_MATH_DEFINES
#include "Circle.h"
#include "CirclePrinter.h"
#include <cmath>

Circle::Circle() {
	_radius = 0;
}

Circle::Circle(double value) {
	_radius = value;
}

double Circle::radius() const {
	return _radius;
}

void Circle::setRadius(double value) {
	_radius = value;
}

double Circle::getArea() const {
	return M_PI * _radius * _radius;
}

double Circle::getPerimeter() const {
	return M_PI * 2 * _radius;
}

void  Circle::printWithRawProperties() {
	setPrinter(std::make_unique<PrintCircleWithRawProperties>());
	if (_printer) {
		_printer->print(this);
	}
}
void  Circle::printWithCalculatedProperties() {
	setPrinter(std::make_unique<PrintCircleWithCalculatedProperties>());
	if (_printer) {
		_printer->print(this);
	}
}