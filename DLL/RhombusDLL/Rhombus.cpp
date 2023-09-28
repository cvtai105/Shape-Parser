#include "pch.h"
#include "Rhombus.h"
#include "RhombusPrinter.h"

Rhombus::Rhombus() {
	_diagonal1 = _diagonal2 = 0;
}

Rhombus::Rhombus(double diagonal1, double diagonal2) {
	_diagonal1 = diagonal1;
	_diagonal2 = diagonal2;
}

double Rhombus::diagonal1() const {
	return _diagonal1;
}

double Rhombus::diagonal2() const {
	return _diagonal2;
}

void Rhombus::setDiagonal1(double value) {
	_diagonal1 = value;
}

void Rhombus::setDiagonal2(double value) {
	_diagonal2 = value;
}

double Rhombus::getArea() const {
	return _diagonal1 * _diagonal2 / 2;
}

double Rhombus::getPerimeter() const {
	return 4 * (_diagonal1 * _diagonal2) / (_diagonal1 + _diagonal2);
}

void  Rhombus::printWithRawProperties() {
	setPrinter(std::make_unique<PrintRhombusWithRawProperties>());
	if (_printer) {
		_printer->print(this);
	}
}
void  Rhombus::printWithCalculatedProperties() {
	setPrinter(std::make_unique<PrintRhombusWithCalculatedProperties>());
	if (_printer) {
		_printer->print(this);
	}
}