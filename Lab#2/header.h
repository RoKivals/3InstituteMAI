#include <iostream>
#include <vector>

// Объявления функций
std::vector<std::vector<int>> create_matrix();
bool is_inside_circle(const std::vector<int> &, const int &);
double avg_abscissa(const std::vector<std::vector<int>> &);
double avg_ordinate(const std::vector<std::vector<int>> &);

std::vector<std::vector<int>> create_matrix() {

    // Кол-во точек (строк), кол-во столбцов фиксировано по условию - 2 (x, y)
    unsigned int dots, coordinates;
    std::cout << "Input number of dots: ";
    std::cin >> dots;

    // Создаём массив длинной dots, каждый элементом которого является массив
    // из 2 координат и по умолчанию заполненный нулями
    std::vector<std::vector<int>> dots_array(dots, std::vector<int>(2, 0));

    for (int i(0); i < dots; ++i) {
        std::cout << "Input coordinates of " << i + 1 << " dot\n";
        std::cout << "Format of input is 'x y': ";

        for (int j(0); j < 2; ++j) {
            std::cin >> dots_array[i][j];
        }
    }

    return dots_array;
}

bool is_inside_circle(const std::vector<int> &dot, const int &radius) {
    if (dot[0] * dot[0] + dot[1] * dot[1] <= radius * radius)
        return true;
    else
        return false;
}

double avg_abscissa(const std::vector<std::vector<int>> &dots) {
    unsigned short abscissa = 0;
    int summa = 0;
    for (int i(0); i < dots.size(); ++i)
        summa += dots[i][abscissa];

    return summa / dots.size();
}

double avg_ordinate(const std::vector<std::vector<int>> &dots) {
    unsigned short ordinate = 1;
    int summa = 0;
    for (int i(0); i < dots.size(); ++i)
        summa += dots[i][ordinate];
    return summa / dots.size();
}

