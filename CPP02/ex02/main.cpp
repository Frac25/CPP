#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed(5.05f) * Fixed(2));
	Fixed c;
	const Fixed d = 3.2f;
	const Fixed e = 3.8f;

	//test subject
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a,b) << std::endl << std::endl;

	//test SDU

	a = 2.2f;
	c = 2.8f;

	std::cout << "a = " << a << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << "(a + c) = "<< (a + c) << std::endl;
	std::cout << "(a - c) = "<< (a - c) << std::endl;
	std::cout << "(a * c) = "<< (a * c) << std::endl;
	std::cout << "(a / c) = "<< (a / c) << std::endl;
	std::cout << "(a > c) = "<< (a > c) << std::endl;
	std::cout << "(a < c) = "<< (a < c) << std::endl;
	std::cout << "(a >= c) = "<< (a >= c) << std::endl;
	std::cout << "(a <= c) = "<< (a <= c) << std::endl;
	std::cout << "(a == c) = "<< (a == c) << std::endl;
	std::cout << "(a != c) = "<< (a != c) << std::endl;

	std::cout << "(a++) = "<< (a++) << std::endl;
	std::cout << "(a) = "<< a << std::endl;
	std::cout << "(++a) = "<< (++a) << std::endl;
	std::cout << "(a) = "<< a << std::endl;
	std::cout << "(a--) = "<< (a--) << std::endl;
	std::cout << "(a) = "<< a << std::endl;
	std::cout << "(--a) = "<< (--a) << std::endl;
	std::cout << "(a) = "<< a << std::endl;

	std::cout << "max(a, c) "<< (Fixed::max(a, c)) << std::endl;
	std::cout << "min(a, c) "<< (Fixed::min(a, c)) << std::endl;

	std::cout << "max(d, e) "<< (Fixed::max(d, e)) << std::endl;
	std::cout << "min(d, e) "<< (Fixed::min(d, e)) << std::endl;

	return (0);
}
