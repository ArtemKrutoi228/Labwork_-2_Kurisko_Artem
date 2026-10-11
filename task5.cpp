#include <iostream>

int main() {
    double x, y;
    std::cout << "[Наша ветка control] Введите числа X и Y через пробел: ";
    std::cin >> x >> y;

    // Вместо тернарного оператора обычное ветвление if-else
    double max_val;
    if (x>y) {
        max_val = x;
    }
    else {
        max_val = y;
    }
    std::cout << "Максимальное число: " << max_val << std::endl;
    return 0;
}