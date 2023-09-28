#include "pch.h"
#include "Rectangle.h"
#include "RectanglePrinter.h"

using namespace myrectangle;

Rectangle::Rectangle(){
	_width = _height = 0;
}

Rectangle::Rectangle(double width, double height) {
	_width = width;
	_height = height;
}

void Rectangle::setHeight(double value) {
	_height = value;
}

void Rectangle::setWidth(double value) {
	_width = value;
}

double Rectangle::height() const {
	return _height;
}

double Rectangle::width() const {
	return _width;
}

double Rectangle::getArea() const {
	return _width * _height;
}

double Rectangle::getPerimeter() const {
	return (_width + _height) * 2;
}

void  Rectangle::printWithRawProperties() {
	setPrinter(std::make_unique<PrintRectangleWithRawProperties>());
	if (_printer) {
		_printer->print(this);
	}
}
void  Rectangle::printWithCalculatedProperties() {
	setPrinter(std::make_unique<PrintRectangleWithCalculatedProperties>());
	if (_printer) {
		_printer->print(this);
	}
}