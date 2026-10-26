#include <iostream>
#include <cmath>

int main() {
    double x1, y1, r;
    double x2, y2, R;
    
    // Вводим рандомные значения, так как в ТЗ не указаны константы
    std::cout << "Введите x1, y1, r (1 круг) через пробел: ";
    std::cin >> x1 >> y1 >> r;
    
    std::cout << "Введите x2, y2, R (2 круг) через пробел: ";
    std::cin >> x2 >> y2 >> R;

    // Тут формула растояния меЖду центрами кругов (По сути просто Пифагора)
    double d = std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    // Проверяем условия по цепочке простой else if
    if (d + r <= R) {
        std::cout << "Да" << std::endl;
    } 
    else if (d + R <= r) {
        std::cout << "Да, но справедливо обратное для двух фигур" << std::endl;
    } 
    else if (d < r + R) {
        std::cout << "Фигуры пересекаются" << std::endl;
    } 
    else {
        std::cout << "Ни одно условие не выполнено" << std::endl;
    }

    return 0;
}
