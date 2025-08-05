#include <iostream>
#include "vector.hpp"

// --- Конструктор ---
Vector::Vector(int x_start, int y_start, int x_end, int y_end)
    : x1(x_start), y1(y_start), x2(x_end), y2(y_end) {}

// --- Метод dx (відстань по X) ---
int Vector::dx() const {
    return x2 - x1;
}

// --- Метод dy (відстань по Y) ---
int Vector::dy() const {
    return y2 - y1;
}

// --- Вивід координат ---
void Vector::print() const {
    std::cout << "Початок: (" << x1 << ", " << y1 << "), "
              << "Кінець: (" << x2 << ", " << y2 << ")\n";
}

// --- Порівняння векторів ---
bool Vector::operator==(const Vector& other) const {
    return dx() == other.dx() && dy() == other.dy();
}
