#pragma once

#include "IPrint.h"
class PrintRectangleWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Print base properties, area, perimeter, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Rectangle*</param>
	void print(Shape* p) override;
};

class PrintRectangleWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Print base properties, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Rectangle*</param>
	void print(Shape* p) override;
};