#pragma once

#include "IPrint.h"
class PrintEllipseWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Print base properties, area, perimeter, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Ellipse*</param>
	void print(Shape* p) override;
};

class PrintEllipseWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Print base properties, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Ellipse*</param>
	void print(Shape* p) override;
};
