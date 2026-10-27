#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "a, b, c для ax^4 + bx^2 + c = 0: ";
    std::cin >> a >> b >> c;

    double d = b * b - 4 * a * c;

    if (d < 0) {
        std::cout << "корней нет" << std::endl;
    } else {
        double t1 = (-b + std::sqrt(d)) / (2 * a);
        double t2 = (-b - std::sqrt(d)) / (2 * a);

        if (t1 >= 0) {
            std::cout << "x1 = " << std::sqrt(t1) << ", x2 = " << -std::sqrt(t1) << std::endl;
        }
        if (t2 >= 0 && t1 != t2) {
            std::cout << "x3 = " << std::sqrt(t2) << ", x4 = " << -std::sqrt(t2) << std::endl;
        }
        if (t1 < 0 && t2 < 0) {
            std::cout << "действительных корней нет" << std::endl;
        }
    }

    return 0;
}
