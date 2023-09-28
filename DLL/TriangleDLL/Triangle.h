#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	double _edgeA;
	double _edgeB;
	double _edgeC;
public:
	Triangle();
	Triangle(double, double, double);

public:
	//setter
	void setEdgeA(double);
	void setEdgeB(double);
	void setEdgeC(double);

	//getter
	double edgeA() const;
	double edgeB() const;
	double edgeC() const;

public:
	/// <summary>
	/// calculate area
	/// </summary>
	/// <returns>Triangle area</returns>
	/// 
	double getArea() const override;
	/// <summary>
	/// calculate perimeter
	/// </summary>
	/// <returns>Triangle perimeter</returns>
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

