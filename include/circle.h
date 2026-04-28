#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure {
    double radius;
public:
    Circle(double r);
    ~Circle() override;

    double area() const override;
    double perimetr() override;
    void info() const override;
};

#endif