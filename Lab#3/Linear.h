#ifndef VARIANT8_LINEAR
#define VARIANT8_LINEAR
#include <iostream>
#include <vector>

// y = k*x + b
class Linear {
    double k_coef;
    double b_coef;

  public:
    Linear(const double &k = 1, const double &b = 0);
    void set_k(const double&);
    void set_b(const double&);
    double get_k();
    double get_b();

    // Значение x в однородном уравнении (y = 0)
    double get_x_of_homogeneous_equation();
    double calculate_y_from_x(double x);
    void show_graphic();
};

#endif