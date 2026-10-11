#include <iostream>

int main() {
    double x, y;
    std::cout << "[Ветка main] Введите числа X и Y через пробел: ";
    std::cin >> x >> y;

    // Используя тернатрый оператор находим большее значение
    double max_val = (x > y) ? x : y;

    std::cout << "Максимальное число: " << max_val << std::endl;
    return 0;
}