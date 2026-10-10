#include <iostream>

int main() {
    double x;
    std::cout << "Input text:  ";
    if (!(std::cin >> x)){
        std::cout << "Error! please input a real number" << std::endl; 
        return 1;
    }
    double x2 = x * x; /* convinient form of our x squared (first operation) */
    double B = x * (23 * x2 + 32);
    double A = 69 * x2 + 8;

    double result1 = A+B;
    double result2 = A-B;

    std::cout << "Result number 1: " << result1 << std::endl;
    std::cout << "Result number 2: " << result2 << std::endl;

    return 1;
}