#ifndef VARIANT8_LINEAR
#define VARIANT8_LINEAR
#include <iostream>
#include <vector>

// y = k*x + b
class Linear {
    int k_coef;
    int b_coef;

  public:
    Linear(int &, int &);
    // Значение x в однородном уравнении (y = 0)
    double get_x_of_homogeneous_equation();
    void show_graphic();
};

#endif