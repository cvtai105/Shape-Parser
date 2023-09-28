#include "Shape.h"

Shape::Shape() {
	_printer = nullptr;
}

void Shape::setPrinter(std::unique_ptr<IPrint> printer_) {
	_printer = std::move(printer_);
}

