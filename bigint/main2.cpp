#include "bigint.hpp"
#include <iostream>

int main() {
    std::cout << "=== TESTS DE BASE ===" << std::endl;
    bigint a(0), b(1), c(9), d(10), e(99), f(999);
    std::cout << "a = " << a << "  (attendu: 0)" << std::endl;
    std::cout << "b = " << b << "  (attendu: 1)" << std::endl;
    std::cout << "c = " << c << "  (attendu: 9)" << std::endl;
    std::cout << "d = " << d << "  (attendu: 10)" << std::endl;
    std::cout << "e = " << e << "  (attendu: 99)" << std::endl;
    std::cout << "f = " << f << "  (attendu: 999)" << std::endl;

    std::cout << "\n=== ADDITIONS ===" << std::endl;
    std::cout << "9 + 1 = " << (c + b) << "  (attendu: 10)" << std::endl;
    std::cout << "99 + 1 = " << (e + b) << "  (attendu: 100)" << std::endl;
    std::cout << "999 + 1 = " << (f + b) << "  (attendu: 1000)" << std::endl;
    std::cout << "999 + 999 = " << (f + f) << "  (attendu: 1998)" << std::endl;

    std::cout << "\n=== INCREMENTS ===" << std::endl;
    bigint g(9);
    std::cout << "g = " << g << std::endl;
    std::cout << "++g = " << ++g << " (attendu: 10)" << std::endl;
    std::cout << "g++ = " << g++ << " (retourne ancien: 10)" << std::endl;
    std::cout << "g après g++ = " << g << " (attendu: 11)" << std::endl;

    std::cout << "\n=== DÉCALAGES ===" << std::endl;
    bigint h(42);
    std::cout << "h = " << h << std::endl;
    std::cout << "h << 2 = " << (h << 2) << "  (attendu: 4200)" << std::endl;
    std::cout << "h >> 1 = " << (h >> 1) << "  (attendu: 4)" << std::endl;
    std::cout << "h >> 2 = " << (h >> 2) << "  (attendu: 0)" << std::endl;
    h <<= 3;
    std::cout << "h <<= 3 → " << h << "  (attendu: 42000)" << std::endl;
    h >>= 3;
    std::cout << "h >>= 3 → " << h << "  (attendu: 42)" << std::endl;

    std::cout << "\n=== COMPARAISONS ===" << std::endl;
    bigint i1(100), i2(99), i3(100);

    std::cout << "99 < 100 : " << (i2 < i1) << " (1 attendu)" << std::endl;
	std::cout << "100 < 99 : " << (i1 < i2) << " (0 attendu)" << std::endl;

	std::cout << "100 > 99 : " << (i1 > i2) << " (1 attendu)" << std::endl;
	std::cout << "99 > 100 : " << (i2 > i1) << " (0 attendu)" << std::endl;
    std::cout << "100 == 100 : " << (i1 == i3) << " (1 attendu)" << std::endl;
    std::cout << "100 >= 100 : " << (i1 >= i3) << " (1 attendu)" << std::endl;
    std::cout << "99 >= 100 : " << (i2 >= i1) << " (0 attendu)" << std::endl;

    std::cout << "\n=== SHIFT AVEC BIGINT ===" << std::endl;
    bigint j(123456);
    bigint k(2);
    std::cout << "Avant >>=(2) : " << j << std::endl;
    j >>= k;
    std::cout << "Après >>=(2) : " << j << " (attendu: 1234)" << std::endl;

    std::cout << "\n=== TEST DE SOMMES GROSSES ===" << std::endl;
    bigint x(99999), y(99999);
    bigint z = x + y; // 199998 attendu
    std::cout << "99999 + 99999 = " << z << " (attendu: 199998)" << std::endl;

    std::cout << "\n=== TEST CONSTRUCTEUR PAR DÉFAUT ===" << std::endl;
    bigint def;
    std::cout << "def = " << def << " (attendu: 0 ou rien ?)" << std::endl;

    return 0;
}
