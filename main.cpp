#include <iostream>
#include "dva.hpp"
#include "vector.hpp"

int main() {
    Complex z0;
    Complex z1(5.0);
    Complex z2(3.0, -4.0);
    Complex z3(z2);

    std::cout << "z0 = (" << z0.real() << ", " << z0.imag() << "i)\n";
    std::cout << "z1 = (" << z1.real() << ", " << z1.imag() << "i)\n";
    std::cout << "z2 = (" << z2.real() << ", " << z2.imag() << "i)\n";
    std::cout << "z3 (копия z2) = (" << z3.real() << ", " << z3.imag() << "i)\n\n";

    Complex a(2.0, 3.0), b(-1.0, 4.0);
    Complex sum = a + b;
    Complex diff = a - b;
    Complex prod = a * b;
    Complex quot = a / b;

    std::cout << "a + b = (" << sum.real() << ", " << sum.imag() << "i)\n";
    std::cout << "a - b = (" << diff.real() << ", " << diff.imag() << "i)\n";
    std::cout << "a * b = (" << prod.real() << ", " << prod.imag() << "i)\n";
    std::cout << "a / b = (" << quot.real() << ", " << quot.imag() << "i)\n\n";

    Complex c = a + 2.5;
    Complex d = 2.5 + a;
    Complex e = a - 1.0;
    Complex f = 1.0 - a;
    Complex g = a * 2.0;
    Complex h = 2.0 * a;
    Complex i = a / 2.0;
    Complex j = 2.0 / a;

    std::cout << "a + 2.5 = (" << c.real() << ", " << c.imag() << "i)\n";
    std::cout << "2.5 + a = (" << d.real() << ", " << d.imag() << "i)\n";
    std::cout << "a - 1.0 = (" << e.real() << ", " << e.imag() << "i)\n";
    std::cout << "1.0 - a = (" << f.real() << ", " << f.imag() << "i)\n";
    std::cout << "a * 2.0 = (" << g.real() << ", " << g.imag() << "i)\n";
    std::cout << "2.0 * a = (" << h.real() << ", " << h.imag() << "i)\n";
    std::cout << "a / 2.0 = (" << i.real() << ", " << i.imag() << "i)\n";
    std::cout << "2.0 / a = (" << j.real() << ", " << j.imag() << "i)\n\n";

    Complex z4(1.0, -2.0);
    Complex conj = z4.conjugate();
    Complex neg = -z4;
    std::cout << "z4 = (" << z4.real() << ", " << z4.imag() << "i)\n";
    std::cout << "conj(z4) = (" << conj.real() << ", " << conj.imag() << "i)\n";
    std::cout << "-z4 = (" << neg.real() << ", " << neg.imag() << "i)\n\n";

    double mod = z4.modulus();
    double arg = z4.argument();
    std::cout << "|z4| = " << mod << "\n";
    std::cout << "arg(z4) = " << arg << " rad\n\n";

    z4.real(0.0);
    z4.imag(5.0);
    std::cout << "После изменения: z4 = (" << z4.real() << ", " << z4.imag() << "i)\n\n";

    Vector v1(0, 0, 1, 1);
Vector v2(1, 2, 2, 3);
v1.print();
v2.print();

std::cout << "dx v1 = " << v1.dx() << ", dy v1 = " << v1.dy() << "\n";
std::cout << (v1 == v2 ? "Вектори рівні\n" : "Вектори різні\n");


    return 0;
}
