
#include "pch.h"
#include "Triangle.h"
#include "TrianglePrinter.h"

Triangle::Triangle() {
	_edgeA = 0;
	_edgeB = 0;
	_edgeC = 0;
}
Triangle::Triangle(double a, double b, double c) {
	_edgeA = a;
	_edgeB = b;
	_edgeC = c;
}

void Triangle::setEdgeA(double a) {
	_edgeA = a;
}
void Triangle::setEdgeB(double b) {
	_edgeB = b;
}
void Triangle::setEdgeC(double c) {
	_edgeC = c;
}

//getter
double Triangle::edgeA() const {
	return _edgeA;
}
double Triangle::edgeB() const {
	return _edgeB;
}
double Triangle::edgeC() const {
	return _edgeC;
}

double Triangle::getArea() const {
	double s = getPerimeter() / 2;
	return sqrt(s * (s - _edgeA) * (s - _edgeB) * (s - _edgeC));
}
double Triangle::getPerimeter() const {
	return _edgeA + _edgeB + _edgeC;
}

void  Triangle::printWithRawProperties() {
	setPrinter(std::make_unique<PrintTriangleWithRawProperties>());
	if (_printer) {
		_printer->print(this);
	}
}
void  Triangle::printWithCalculatedProperties() {
	setPrinter(std::make_unique<PrintTriangleWithCalculatedProperties>());
	if (_printer) {
		_printer->print(this);
	}
}