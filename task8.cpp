#include <iostream>
#include <cmath>
int main() {
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Введите координаты x1 y1 x2 y2 x3 y3 через пробел: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    double a = std::sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    
    double b = std::sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    
    double c = std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    
    std::cout << "стороны: " << a << " " << b << " " << c << std::endl;

    double p = (a + b + c) / 2.0;
    double S1 = std::sqrt(p * (p - a) * (p - b) * (p -c));
    double P = a + b + c;
    
    std::cout << "периметр: " << P << std::endl;
    std::cout << "площадь (1 способ, герон): " << S1 << std::endl;

    double ha = (2.0 * S1) / a;
    double hb = (2.0 * S1) / b;
    double hc = (2.0 * S1) / c;

    std::cout << "высоты: " << ha << " " << hb << " " << hc << std::endl;

    double S2 = 0.5 * a * ha;

    std::cout << "площадь (2 способ, через высоту): " << S2 << std::endl;

    double rA = std::acos((b * b + c * c - a * a) / (2.0 * b * c));
    double rB = std::acos((a * a + c * c - b * b) / (2.0 * a * c));
    double rC = std::acos((a * a + b * b - c * c) / (2.0 * a * b));

    double pi = 3.141592653589793;
    double dA = rA * 180.0 / pi;
    double dB = rB * 180.0 / pi;
    double dC = rC * 180.0 / pi;

    std::cout << "углы в рад : " << rA << " " << rB << " " << rC << std::endl;
    std::cout << "углы в град : " << dA << " " << dB << " " << dC << std::endl;

    double S3 = 0.5 * b * c * std::sin(rA);

    std::cout << "площадь(3 способ, синус): " << S3 << std::endl;

    double ma = 0.5 * std::sqrt(2.0 * b * b + 2.0 * c * c - a * a);
    double mb = 0.5 * std::sqrt(2.0 * a * a + 2.0 * c * c - b * b);
    double mc = 0.5 * std::sqrt(2.0 * a * a + 2.0 * b * b - c * c);

    std::cout << "медианы: " << ma << " " << mb << " " << mc << std::endl;

    double la = std::sqrt(b * c * (P * (b + c - a))) / (b + c);
    double lb = std::sqrt(a * c * (P * (a + c - b))) / (a + c);
    double lc = std::sqrt(a * b * (P * (a + b - c))) / (a + b);

    std::cout << "биссектрисы: " << la << " " << lb << " " << lc << std::endl;

    double r = S1 / p;
    double R = (a * b * c) / (4.0 * S1);

    std::cout << "радиусы r и R: " << r << " " << R << std::endl;

    double lin = 2.0 * pi * r;
    double sin = pi * r * r;
    double lout = 2.0 * pi * R;
    double sout = pi * R * R;

    std::cout << "вписанная окружность (длина и площадь): " << lin << " " << sin << std::endl;
    std::cout << "описанная окружность (длина и площадь): " << lout << " " << sout << std::endl;

    return 0;
}