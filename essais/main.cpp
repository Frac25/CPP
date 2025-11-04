#include"BigInt.hpp"

int main(void)
{
	BigInt a("123456");
	BigInt b("1234567");
	BigInt c("3");

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b.value << std::endl;
	std::cout << "c = " << c.value << std::endl;

	c = a + b;

	std::cout << "c = " << c.value << std::endl;


	return(0);
}