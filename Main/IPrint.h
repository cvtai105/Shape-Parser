#pragma once

//forward declare
class Shape;

/// <summary>
/// interface for Shape Printer, Strategy class
/// </summary>
class IPrint
{
public:
	/// <summary>
	/// Print base properties, area, perimeter, name of shape 
	/// </summary>
	/// <param name="p">pointer of concrete shape object</param>
	virtual void print(Shape* p) = 0;
};

