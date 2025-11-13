#include "bigint.hpp"
#include<iostream>

int main()
{

//	std::cout << "unsigned int max = " << std::numeric_limits<unsigned int>::max() << std::endl;

	const bigint a(42);
	bigint b(21), c, d(1337), e(d);
	bigint f(4294967295);
	bigint g(1), h(9999), i(0);


	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
//	std::cout << "f = " << f << std::endl; //sdu
//	std::cout << "g = " << g << std::endl; //sdu
//	std::cout << "h = " << h << std::endl; //sdu
//	std::cout << "i = " << i << std::endl; //sdu

	std::cout << "a + b = " << a + b << std::endl;
//	std::cout << "d + b = " << d + b << std::endl;//sdu
//	std::cout << "h + g = " << h + g << std::endl;//sdu
//	std::cout << "f + f + f = " << f + f + f << std::endl;//sdu
	std::cout << "(c += a) = " << (c += a) << std::endl;
//	std::cout << "(d += g) = " << (d += g) << std::endl;//sdu
	std::cout << "b = " << b << std::endl;
	std::cout << "++b = " << ++b << std::endl;
	std::cout << "b++ = " << b++ << std::endl;
//	std::cout << "(b<<10) = " << (b<<10) << std::endl;//SDU
	std::cout << "(b<<10) + 42 = " << (b<<10) + 42 << std::endl;
	std::cout << "(d<<=4) = " << (d<<=4) << std::endl;
	std::cout << "(d>>=2) = " << (d>>=2) << std::endl;
	std::cout << "(d>>=2) = " << (d>>=(const bigint)2) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "(d < a) = " << (d < a) << std::endl;
	std::cout << "(d > a) = " << (d > a) << std::endl;
	std::cout << "(d == a) = " << (d == a) << std::endl;
	std::cout << "(d != a) = " << (d != a) << std::endl;
	std::cout << "(d <= a) = " << (d <= a) << std::endl;
	std::cout << "(d >= a) = " << (d >= a) << std::endl;

	std::cout << std::endl;

//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//	std::cout << "c = " << c << std::endl;
//	std::cout << "d = " << d << std::endl;
//	std::cout << "e = " << e << std::endl;
}
