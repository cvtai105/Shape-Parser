#pragma once

#include "IPrint.h"
class PrintCircleWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Print base properties, area, perimeter, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Circle*</param>
	void print(Shape* p) override;
};

class PrintCircleWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Print base properties
	/// </summary>
	/// <param name="p">Shape*, define as Circle*</param>
	void print(Shape* p) override;
};