# include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << " et b = " << b << std::endl;
	::swap(a, b);
	std::cout << "after swap : a = " << a << " et b = " << b << std::endl;
	std::cout << "min(a,b) = " << ::min(a,b) << std::endl;
	std::cout << "max(a,b) = " << ::max(a,b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << " et d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap : c = " << c << " et d = " << d << std::endl;
	std::cout << "min(c,d) = " << ::min(c,d) << std::endl;
	std::cout << "max(c,d) = " << ::max(c,d) << std::endl;

		return(0);
}
