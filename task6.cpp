#include <iostream>
#include <cmath> // Подключаем библиотеку cmath (для наших fabs и pow)

int main() {
    double x, y, C, K;

    std::cout << "[Отдельная ветка task6] Введите переменные x, y, C, K : "; // D мы сюда не вводим тк находим по формуле!
    std::cin >> x >> y >> C >> K;

    
    double A = x + y; // Вычисляем А строго по условию
    
    
    double D = std::fabs(C - A); // fabs() используем для вычисления модуля вещественного числа!

    
    double S = 10.1 + (A / C) - (D / std::pow(K, 2)); // Считаем сумму S. Воспользовались pow(K, 2) — это по сути К в квадрате

    std::cout << "Результат S = " << S << std::endl;

    return 0;
}