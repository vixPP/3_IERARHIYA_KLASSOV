#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhomb.h"

using namespace std;

void print_info(Figure* fig)
{
    fig->print();
}

int main()
{
    Triangle triangle(10, 20, 30, 50, 60, 70);
    triangle.print();

    RightTriangle right_triangle(10, 20, 30, 50, 60);
    print_info(&right_triangle);

    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    print_info(&isosceles_triangle);

    EquilateralTriangle equilateral_triangle(30);
    print_info(&equilateral_triangle);

    Quadrangle quandrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&quandrangle);

    Rectangle rectangle(10, 20);
    print_info(&rectangle);

    Square square(10);
    print_info(&square);

    Parallelogram parellelogram(20, 30, 30, 40);
    print_info(&parellelogram);

    Rhomb rhomb(30, 30, 40);
    print_info(&rhomb);

    return 0;
}