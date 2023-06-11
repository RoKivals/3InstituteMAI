#include "Linear.h"

Linear::Linear(const double&k, const double&b) {
    if (k == 0) {
        std::cerr << "It's not a linear equation";
        std::exit(1);
    }
    k_coef = k;
    b_coef = b;
}

void Linear::set_k(const double& k) {
    this->k_coef = k;
}

void Linear::set_b(const double& b) {
    this->b_coef = b;
}

double Linear::get_k() {
    return this->k_coef;
}

double Linear::get_b() {
    return this->b_coef;
}

double Linear::get_x_of_homogeneous_equation() { return -b_coef / k_coef; }

double Linear::calculate_y_from_x(double x) {
    return k_coef * x + b_coef;
}

void Linear::show_graphic(){};