#pragma once

class Vector {
private:
    int x1, y1, x2, y2;

public:
    // --- Конструктор ---
    Vector(int x_start, int y_start, int x_end, int y_end);

    // --- Геттери зміщення ---
    int dx() const;
    int dy() const;

    // --- Вивід інформації ---
    void print() const;

    // --- Порівняння ---
    bool operator==(const Vector& other) const;
};
