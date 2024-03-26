#include "Triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C)
{
	name = "Треугольник";
}

void Triangle::print()
{
	cout << endl << name << ":" << endl << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
	cout << "Углы: A=" << A << " B=" << B << " C=" << C << endl;
}
