#ifndef FIGURE_NON_VIRTUAL_H
#define FIGURE_NON_VIRTUAL_H

#include "spdlog/spdlog.h"

class FigureNonVirtual {
public:
    FigureNonVirtual();
    ~FigureNonVirtual();
    double area() const;
    double perimetr();
    void info() const;
};

#endif