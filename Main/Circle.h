#pragma once
#include "Shape.h"

class Circle: public Shape{
private:
	double _radius;

public:
	Circle();
	Circle(double);

public:
	//getter
	double radius() const;
	
	//setter
	void setRadius(double);

public:

	/// <summary>
	/// calculate area
	/// </summary>
	/// <returns>Circle area</returns>
	/// 
	double getArea() const override;
	/// <summary>
	/// calculate perimeter
	/// </summary>
	/// <returns>Circle perimeter</returns>
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

