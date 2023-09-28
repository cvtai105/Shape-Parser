#pragma once
#include "Shape.h"

namespace myrectangle {
	class Rectangle :public Shape {
	private:
		double _width;
		double _height;

	public:
		Rectangle();
		Rectangle(double, double);

	public:
		void setWidth(double);
		void setHeight(double);

		double width() const;
		double height() const;

	public:
		/// <summary>
		/// calculate area
		/// </summary>
		/// <returns>Rectangle area</returns>
		/// 
		double getArea() const override;
		/// <summary>
		/// calculate perimeter
		/// </summary>
		/// <returns>Rectangle perimeter</returns>
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
}