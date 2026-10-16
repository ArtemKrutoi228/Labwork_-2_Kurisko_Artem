#include <iostream>
#include <cmath>

int main() {
    double a, c, z;
    std::cout << "Введите a, c, z через пробел: "; // Т.к по усл не указано какие долЖны быть переменные то берем призвольные
    std::cin >> a >> c >> z;

double x = 0.0;
if (z <= 1.0) {
    x = z * z + 1.0;
    std::cout << "[Условие: z <= 1] Вычислено x = z^2 + 1" << std::endl;
} else {
    x = 1.0 / std::sqrt(z - 1.0);
    std::cout << "[Условие: z > 1] Вычислено x = 1 / sqrt(z - 1)" << std::endl;
}
// Сделали вывод сообщения о выбранной ветке как просили по усл/ТЗ
int choice;
std::cout << "Выберите функцию: 1 -(2x), 2 -(x^3), 3 -(x/3): ";
std::cin >> choice;

double fx = 0.0;

switch (choice) {
    case 1:
        fx = 2.0 * x;
        std::cout << "Вычислено с функцией 2x" << std::endl;
        break;
    case 2:
        fx = x * x * x;
        std::cout << "Вычислено с функцией x^3" << std::endl;
        break;
    case 3:
        fx = x / 3.0;
        std::cout << "Вычислено с функцией x/3" << std::endl;
        break;
    default:
        std::cout << "Выбрано невозмоЖное значение функции!" << std::endl;
        return 1;
}
// Расчет самой формулы y
double term1 = a * std::pow(std::sin(fx * fx - 1.0), 3.0);
double term2 = c * std::log(std::fabs(x));
double term3 = std::exp(x);

double y = term1 + term2 + term3;

std::cout << "Результат y = " << y << std::endl;

return 0;
}