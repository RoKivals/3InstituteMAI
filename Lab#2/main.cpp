#include "header.h"

int main() {
    // auto автоматически определяет типпеременной
    auto dots = create_matrix();
    int radius = 0;
    std::cout << "Input radius of circle: ";
    std::cin >> radius;
    int error_ind = -1;
    for (int i(0); i < dots.size(); ++i) {
        if (!is_inside_circle(dots[i], radius)) {
            error_ind = i;
            number_of_inappropriate_dots(error_ind, dots, radius); 
            break;
        }
    }
    if (error_ind == -1) {
        std::cout << "Average value of abscissa is " << avg_abscissa << '\n';
        std::cout << "Average value of ordinate is " << avg_abscissa << '\n';
    }
    return 0;
}
