#include "Linear.h"

Linear::Linear(int &k, int &b) {
    if (k == 0) {
        std::cerr << "It's not a linear equation";
        std::exit(1);
    }
    k_coef = k;
    b_coef = b;
}

double Linear::get_x_of_homogeneous_equation() { return -b_coef / k_coef; }

void Linear::show_graphic(){};