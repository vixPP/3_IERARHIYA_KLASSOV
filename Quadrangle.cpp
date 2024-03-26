#include "Quadrangle.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
{
	name = "Четырехугольник";
}

void Quadrangle::print()
{
	cout << endl << name << ":" << endl << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
}
