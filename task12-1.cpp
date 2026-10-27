#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введите коэффициенты a, b, c через пробел: ";
    std::cin >> a >> b >> c;

    // Защита(валидация ввода)
    if (a == 0.0) {
        if (b == 0.0) {
            if (c == 0.0) std::cout << "Бесконечно много корней" << std::endl;
            else std::cout << "Корней нет" << std::endl; // x-ы просто отсутвуют

    //если a == 0, уравнение превращается в обычное квадратное bx^2 + c = 0 - решаем уЖе его
        } else {
            double t = -c / b; // t если что тут это x^2
            if (t < 0.0) std::cout << "Корней нет" << std::endl;
            else if (t == 0.0) std::cout << "Корень x = 0" << std::endl;
            else std::cout << "Корни: x1 = " << std::sqrt(t) << ", x2 = " << -std::sqrt(t) << std::endl;
        }
        return 0;
    }

    // Считаем дискриминант D для t (по сути x^2)
    double D = b * b - 4.0 * a * c;

    if (D < 0.0) {
        std::cout << "Дискриминант < 0. Действительных корней нет" << std::endl;
    } 
    else {
        double t1 = (-b + std::sqrt(D)) / (2.0 * a);
        double t2 = (-b - std::sqrt(D)) / (2.0 * a);

        bool has_roots = false;

        // Проверяем первый корень t1
        if (t1 > 0.0) {
            std::cout << "Корень x1 = " << std::sqrt(t1) << std::endl;
            std::cout << "Корень x2 = " << -std::sqrt(t1) << std::endl;
            has_roots = true;
        } else if (t1 == 0.0) {
            std::cout << "Корень x = 0" << std::endl;
            has_roots = true;
        }

        // Проверяем второй корень t2 (только если t2 не равен t1, чтобы не дублировать x=0)
        if (D > 0.0) { 
            if (t2 > 0.0) {
                std::cout << "Корень x3 = " << std::sqrt(t2) << std::endl;
                std::cout << "Корень x4 = " << -std::sqrt(t2) << std::endl;
                has_roots = true;
            } else if (t2 == 0.0) {
                std::cout << "Корень x = 0" << std::endl;
                has_roots = true;
            }
        }

        if (!has_roots) {
            std::cout << "Дискриминант >= 0, но корни t отрицательные. Действительных корней x нет" << std::endl;
        }
    }

    return 0;
}
