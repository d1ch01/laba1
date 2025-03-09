#include <iostream>
#include <cmath>
using namespace std;

// Функции для прямоугольника
double rectanglePerimeter(double width, double height) {
    return 2 * (width + height);
}

double rectangleArea(double width, double height) {
    return width * height;
}

double rectangleDiagonal(double width, double height) {
    return sqrt(width * width + height * height);
}
int main() {
    // Пример использования
    double width = 5, height = 10;
    cout << "Прямоугольник:" << endl;
    cout << "Периметр: " << rectanglePerimeter(width, height) << endl;
    cout << "Площадь: " << rectangleArea(width, height) << endl;
    cout << "Диагональ: " << rectangleDiagonal(width, height) << endl;
return 0;
}
