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
    double a, b, c;
    cout << "Введите значение первой стороны: ";
    cin >> a;
    cout << "Введите значение второй стороны: ";
    cin >> b;
    cout << "Введите значение третьей стороны: ";
    cin >> c;
    if (a < 0 || b < 0 ||c < 0) {
        cout << "стороны не могут быть отрицательными." << endl;
        return 1; // Завершение программы с кодом ошибки
    }
    if (a+b>c && a+c>b && c+b>a) {
    cout << "\nТреугольник:" << endl;
    cout << "Периметр: " << trianglePerimeter(a, b, c) << endl;
    cout << "Площадь: " << triangleArea(a, b, c) << endl;
    cout << "Равнобедренный: " << (isIsosceles(a, b, c) ? "Да" : "Нет") << endl;
    }
    else{
      cout << "Не является треугольником";} 
    return 0;
}
