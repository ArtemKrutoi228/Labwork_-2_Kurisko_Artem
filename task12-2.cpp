#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введите a, b, c через пробел: ";
    std::cin >> a >> b >> c;
//Просто решаем через замену
    double d = b * b - 4.0 * a * (c - 2.0 * a);

    if (d < 0) {
        std::cout << "корней нет" << std::endl;
    } else {

        double t1 = (-b + std::sqrt(d)) / (2.0 * a);
        double t2 = (-b - std::sqrt(d)) / (2.0 * a);

        double d1 = t1 * t1 - 4.0;
        if (d1 >= 0) {
            std::cout << "x1 = " << (t1 + std::sqrt(d1)) / 2.0 
                      << ", x2 = " << (t1 - std::sqrt(d1)) / 2.0 << std::endl;
        }

        double d2 = t2 * t2 - 4.0;
        if (d2 >= 0 && t1 != t2) {
            std::cout << "x3 = " << (t2 + std::sqrt(d2)) / 2.0 
                      << ", x4 = " << (t2 - std::sqrt(d2)) / 2.0 << std::endl;
        }
    }

    return 0;
}

