#include <iostream>
// Решил взять НОД как самый простой алгоритм (=
int main() {
    int a, b;
    std::cout << "Введите два числа через пробел: ";
    std::cin >> a >> b;

    int orig_a = a, orig_b = b; // Сохраняем для ответа

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    int step = 0;
// вывод ДО первого шага
    std::cout << "До шагов: a = " << a << ", b = " << b << std::endl;

// Пока числа не сравнялись, просто вычитаем
    while (a != b) {
        step++;
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
// вывод ПОСЛЕ каждого шага
        std::cout << "Шаг " << step << ": a = " << a << ", b = " << b << std::endl;
    }

    std::cout << "НОД чисел " << orig_a << " и " << orig_b << " равен: " << a << std::endl;
    return 0;
}
