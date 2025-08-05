#include "dva.hpp"

// --- Конструкторы ---
Complex::Complex() : re(0.0), im(0.0) {}
Complex::Complex(double real_part) : re(real_part), im(0.0) {}
Complex::Complex(double real_part, double imag_part) : re(real_part), im(imag_part) {}
Complex::Complex(const Complex& other) : re(other.re), im(other.im) {}

// --- Геттеры и сеттеры ---
double Complex::real() const { return re; }
double Complex::imag() const { return im; }
void Complex::real(double new_re) { re = new_re; }
void Complex::imag(double new_im) { im = new_im; }

// --- Арифметика с Complex ---
Complex Complex::operator+(const Complex& other) const {
    return Complex(re + other.re, im + other.im);
}
Complex Complex::operator-(const Complex& other) const {
    return Complex(re - other.re, im - other.im);
}
Complex Complex::operator*(const Complex& other) const {
    return Complex(re * other.re - im * other.im,
                   re * other.im + im * other.re);
}
Complex Complex::operator/(const Complex& other) const {
    double denom = other.re * other.re + other.im * other.im;
    return Complex((re * other.re + im * other.im) / denom,
                   (im * other.re - re * other.im) / denom);
}

// --- Унарный минус и сопряжение ---
Complex Complex::operator-() const {
    return Complex(-re, -im);
}
Complex Complex::conjugate() const {
    return Complex(re, -im);
}

// --- Модуль и аргумент ---
double Complex::modulus() const {
    return std::sqrt(re * re + im * im);
}
double Complex::argument() const {
    return std::atan2(im, re);
}

// --- Complex ↔ double ---
Complex Complex::operator+(double real) const {
    return Complex(re + real, im);
}
Complex Complex::operator-(double real) const {
    return Complex(re - real, im);
}
Complex Complex::operator*(double scalar) const {
    return Complex(re * scalar, im * scalar);
}
Complex Complex::operator/(double scalar) const {
    return Complex(re / scalar, im / scalar);
}

// --- Внешние mixed-операторы ---
Complex operator+(double real, const Complex& z) {
    return Complex(real + z.real(), z.imag());
}
Complex operator-(double real, const Complex& z) {
    return Complex(real - z.real(), -z.imag());
}
Complex operator*(double scalar, const Complex& z) {
    return Complex(z.real() * scalar, z.imag() * scalar);
}
Complex operator/(double real, const Complex& z) {
    double denom = z.real() * z.real() + z.imag() * z.imag();
    return Complex((real * z.real()) / denom,
                   (-real * z.imag()) / denom);
}
