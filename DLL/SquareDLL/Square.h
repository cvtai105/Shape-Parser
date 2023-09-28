#pragma once
#include "Shape.h"

class Square : public Shape {
private:
	double _edge;

public:
	Square();
	Square(double);

public:
	double edge() const ;
	void setEdge(double);

public:
	/// <summary>
	/// calculate area
	/// </summary>
	/// <returns>Square area</returns>
	/// 
	double getArea() const override;
	/// <summary>
	/// calculate perimeter
	/// </summary>
	/// <returns>Square perimeter</returns>
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