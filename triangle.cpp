#include <iostream>
#include <cmath>
using namespace std;
// Функции для треугольника
double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}

double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool isIsosceles(double a, double b, double c) {
    return (a == b) or (b == c) or (a == c);
}
int main() {
    setlocale(LC_ALL, "RU");
    double a = 3, b = 4, c = 5;
    cout << "\nТреугольник:" << endl;
    cout << "Периметр: " << trianglePerimeter(a, b, c) << endl;
    cout << "Площадь: " << triangleArea(a, b, c) << endl;
    cout << "Равнобедренный: " << (isIsosceles(a, b, c) ? "Да" : "Нет") << endl;

    return 0;
}
