#include <iostream>
#include <cmath>

int main() {
    double p, q;
    std::cout << "Введите p и q через пробел: ";
    std::cin >> p >> q;

    // Границы поиска , просто предпологаем что корень только этом промеЖутке - просто решили
    double low = -100.0;
    double high = 100.0;
    double middle = 0.0;

    for (int i = 0; i < 50; i++) { // 50 итераций задают точность поиска корня: этого более чем достаточно для нахождения ответа
        middle = (low + high) / 2.0; //середина
        
        // Считаем уравнения x^3 + px + q в середине и на левой границе
        double f_middle = middle * middle * middle + p * middle + q;
        double f_low = low * low * low + p * low + q;

        // Если знаки на левой границе и в середине разные, значит корень слева
        if (f_low * f_middle < 0.0) {
            high = middle;//по сути наш корень
        } else {
            low = middle; 
        }
    }

    std::cout << "x1 = " << middle << std::endl;

    return 0;
}
