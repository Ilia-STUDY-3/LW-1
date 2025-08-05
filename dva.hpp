#pragma once
#include <cmath>

class Complex {
private:
    double re;
    double im;

public:
    // --- Конструкторы ---
    Complex();                          // по умолчанию: 0 + i·0
    Complex(double real_part);          // инициализация одним действительным
    Complex(double real_part, double imag_part);  // двумя числами
    Complex(const Complex& other);      // копирование

    // --- Геттеры и сеттеры ---
    double real() const;
    double imag() const;
    void real(double new_re);
    void imag(double new_im);

    // --- Арифметика с Complex ---
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // --- Унарный минус и сопряжение ---
    Complex operator-() const;
    Complex conjugate() const;

    // --- Модуль и аргумент ---
    double modulus() const;
    double argument() const;

    // --- Операции Complex ↔ double ---
    Complex operator+(double real) const;
    Complex operator-(double real) const;
    Complex operator*(double scalar) const;
    Complex operator/(double scalar) const;

    // --- Присваивание и деструктор ---
    Complex& operator=(const Complex& other) = default;
    ~Complex() = default;
};

// --- Внешние mixed-операторы ---
Complex operator+(double real, const Complex& z);
Complex operator-(double real, const Complex& z);
Complex operator*(double scalar, const Complex& z);
Complex operator/(double real, const Complex& z);
