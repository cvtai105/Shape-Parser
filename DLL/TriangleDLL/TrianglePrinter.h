#pragma once

#include "IPrint.h"
class PrintTriangleWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Print base properties, area, perimeter, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Triangle*</param>
	void print( Shape* p) override;
};

class PrintTriangleWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Print base properties, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Triangle*</param>
	void print( Shape* p) override;
};