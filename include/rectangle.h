#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure {
    double width;
    double height;
public:
    Rectangle(double w, double h);
    ~Rectangle() override;

    double area() const override;
    double perimetr() override;
    void info() const override;
};

#endif // RECTANGLE_H