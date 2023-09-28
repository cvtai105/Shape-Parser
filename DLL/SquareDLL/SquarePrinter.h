#pragma once

#include "IPrint.h"
class PrintSquareWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Print base properties, area, perimeter, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Square*</param>
	void print( Shape* p) override;
};

class PrintSquareWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Print base properties, name of shape 
	/// </summary>
	/// <param name="p">Shape*, define as Square*</param>
	void print( Shape* p) override;
};