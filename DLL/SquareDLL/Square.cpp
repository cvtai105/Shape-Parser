#include "pch.h"
#include "Square.h"
#include "SquarePrinter.h"

Square::Square() {
	_edge = 0;
}

Square::Square(double edge) {
	_edge = edge;
}

double Square::edge() const {
	return _edge;
}

void Square::setEdge(double value) {
	_edge = value;
}

double Square::getArea() const {
	return _edge * _edge;
}

double Square::getPerimeter() const {
	return _edge * 4;
}

void  Square::printWithRawProperties() {
	setPrinter(std::make_unique<PrintSquareWithRawProperties>());
	if (_printer) {
		_printer->print(this);
	}
}
void  Square::printWithCalculatedProperties() {
	setPrinter(std::make_unique<PrintSquareWithCalculatedProperties>());
	if (_printer) {
		_printer->print(this);
	}
}