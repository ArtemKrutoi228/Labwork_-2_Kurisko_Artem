#include <iostream>

int main() {
    double x, y, z;
    std::cout << "Введите три стороны треугольника (x y z): ";
    std::cin >> x >> y >> z;

    if ((x + y > z) && (x + z > y) && (y + z > x)) { // воспользуемся теоремой о неравенстве треугольников
        std::cout << "Треугольник СУЩЕСТВУЕТ." << std::endl;
    } else {
        std::cout << "Треугольник НЕ СУЩЕСТВУЕТ." << std::endl;
    }

    return 0; // Всё! завершаем программу
}