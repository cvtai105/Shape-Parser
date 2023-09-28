#pragma once
#include "Shape.h"

namespace myellipse {
	class Ellipse : public Shape {
	private:
		double _minorAxis;
		double _majorAxis;

	public:
		Ellipse();
		Ellipse(double, double);

	public:
		//setter
		void setMajorAxis(double value);
		void setMinorAxis(double value);

		//getter
		double minorAxis() const;
		double majorAxis() const;

	public:

		/// <summary>
		/// calculate area
		/// </summary>
		/// <returns>Ellipse area</returns>
		/// 
		double getArea() const override;
		/// <summary>
		/// calculate perimeter
		/// </summary>
		/// <returns>Ellipse perimeter</returns>
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