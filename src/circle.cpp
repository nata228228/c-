#include "circle.h"
#include <cmath>

Circle::Circle(double r) : radius(r) {
    spdlog::info("Circle, radius ", r);
}

Circle::~Circle() {
    spdlog::debug("Circle destructor, radius ", radius);
}

double Circle::area() const {
    double result = M_PI * radius * radius;
    spdlog::info("Circle::area() ", result);
    return result;
}

double Circle::perimetr() {
    double result = 2 * M_PI * radius;
    spdlog::info("Circle::perimetr() ", result);
    return result;
}

void Circle::info() const {
    spdlog::info("Circle::info(), radius ", radius);
}