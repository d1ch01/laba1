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
    double width, height;

    // Ввод данных от пользователя
    cout << "Введите ширину прямоугольника: ";
    cin >> width;
    cout << "Введите высоту прямоугольника: ";
    cin >> height;

    // Проверка на отрицательные значения
    if (width < 0 || height < 0) {
        cout << "Ошибка: ширина и высота не могут быть отрицательными." << endl;
        return 1; // Завершение программы с кодом ошибки
    }

    // Вывод результатов
    cout << "\nПрямоугольник:" << endl;
    cout << "Ширина: " << width << ", Высота: " << height << endl;
    cout << "Периметр: " << rectanglePerimeter(width, height) << endl;
    cout << "Площадь: " << rectangleArea(width, height) << endl;
    cout << "Диагональ: " << rectangleDiagonal(width, height) << endl;

    return 0;
}
