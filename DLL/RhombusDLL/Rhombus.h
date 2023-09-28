#pragma once
#include "Shape.h"

class Rhombus: public Shape
{
private:
	double _diagonal1;
	double _diagonal2;

public:
	Rhombus();
	Rhombus(double, double);
	
public:
	double diagonal1() const;
	double diagonal2() const;

	void setDiagonal1(double);
	void setDiagonal2(double);

public:
	/// <summary>
	/// calculate area
	/// </summary>
	/// <returns>Rhombus area</returns>
	/// 
	double getArea() const override;
	/// <summary>
	/// calculate perimeter
	/// </summary>
	/// <returns>Rhombus perimeter</returns>
	double getPerimeter() const override;


	/// <summary>
	/// print result after parse
	/// </summary>
	virtual void printWithRawProperties();

	/// <summary>
	/// print details infomation
	/// </summary>
	virtual void printWithCalculatedProperties();
};

