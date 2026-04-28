#include "figure.h"

Figure::Figure() {
    spdlog::info("Figure constructor called");
}

Figure::~Figure() {
    spdlog::debug("Figure destructor called");
}

double Figure::perimetr() {
    spdlog::info("Figure::perimetr() called");
    return 0.0;
}
void Figure::info() const {
    spdlog::info("Figure::info() called");
}



//
// #include "figure.h"
//
// Figure::Figure() {
//     spdlog::info("Figure constructor called");
// }
//
// Figure::~Figure() {
//     spdlog::debug("Figure destructor called");
// }
//
// double Figure::perimetr() {
//     spdlog::info("Figure::perimetr() called");
//     return 0.0;
// }
// void Figure::info() const {
//     spdlog::info("Figure::info() called");
// }