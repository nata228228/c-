#include "rectangle.h"

Rectangle::Rectangle(double w, double h) : width(w), height(h) {
    spdlog::info("Rectangle constructor called, width = {}, height = {}", w, h);
}

Rectangle::~Rectangle() {
    spdlog::debug("Rectangle destructor called, width = {}, height = {}", width, height);
}

double Rectangle::area() const {
    double result = width * height;
    spdlog::info("Rectangle::area() = {}", result);
    return result;
}

double Rectangle::perimetr() {
    double result = 2 * (width + height);
    spdlog::info("Rectangle::perimetr() = {}", result);
    return result;
}

void Rectangle::info() const {
    spdlog::info("Rectangle::info() called, width = {}, height = {}", width, height);
}