#include <iostream>
#include <vector>

// Создаём функцию с возвращаемым типом unsigned int (отрицательные числа нас не
// интересуют, так как просят найти наибольшее абсолютное значение) Передаём в
// неё const вектор, поскольку элементы вектора внутри функции не изменяются
unsigned int abs_max(const std::vector<int> &digits) {
  // Переменная для хранения результата нашей функции
  unsigned int result = 0;
  // Цикл, который итерируется по всем элементам вектора
  for (int digit : digits) {
    if (abs(digit) > result) result = abs(digit);
  }
  return result;
}

// Считывание вектора
std::vector<int> read_arr() {
  unsigned int cnt;
  std::cout << "Input count of digits: ";
  std::cin >> cnt;
  std::vector<int> digits(cnt, 0);
  std::cout << "Input digits: ";

  for (int i(0); i < cnt; ++i) {
    std::cin >> digits[i];
  }

  return digits;
}

int main() {
  std::vector<int> A = read_arr();
  std::vector<int> B = read_arr();
  std::cout << "The maximum absolute value of first array is: " << abs_max(A) << '\n';
  std::cout << "The maximum absolute value of second array is: " << abs_max(B);
  return 0;
}
