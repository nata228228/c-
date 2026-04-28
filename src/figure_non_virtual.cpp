#include "figure_non_virtual.h"

FigureNonVirtual::FigureNonVirtual() {
    spdlog::info("FigureNonVirtual constructor called");
}

FigureNonVirtual::~FigureNonVirtual() {
    spdlog::debug("FigureNonVirtual destructor called");
}

double FigureNonVirtual::area() const {
    spdlog::info("FigureNonVirtual::area() called");
    return 0.0;
}

double FigureNonVirtual::perimetr() {
    spdlog::info("FigureNonVirtual::perimetr() called");
    return 0.0;
}

void FigureNonVirtual::info() const {
    spdlog::info("FigureNonVirtual::info() called");
}