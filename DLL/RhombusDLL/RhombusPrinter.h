#pragma once

#include "IPrint.h"
class PrintRhombusWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Print base properties, area, perimeter, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Rhombus*</param>
	void print(Shape* p) override;
};

class PrintRhombusWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Print base properties, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Rhombus*</param>
	void print( Shape* p) override;
};