#ifndef FIGURE_H
#define FIGURE_H

#include "spdlog/spdlog.h"

class Figure {
public:
    Figure();
    virtual ~Figure();
    virtual double area() const = 0;
    virtual double perimetr();
    virtual void info() const;
};

#endif


//
// #ifndef FIGURE_H
// #define FIGURE_H
//
// #include "spdlog/spdlog.h"
//
// class Figure {
// public:
//     Figure();
//     virtual ~Figure();
//
//     virtual double area() const = 0;
//     virtual double perimetr();
//     virtual void info() const;
// };
//
// #endif