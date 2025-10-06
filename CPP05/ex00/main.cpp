#include "Bureaucrat.hpp"

int main(void)
{
	try
	{

		Bureaucrat a("Han", 150);
		std::cout << a << std::endl;

		Bureaucrat b("Luc", 100);
		std::cout << b << std::endl;

		Bureaucrat c("Yoda", 1);
		std::cout << c << std::endl;

		Bureaucrat d("Anakin", 0);
		std::cout << d << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	try
	{
		Bureaucrat e("Obi one", 151);
		std::cout << e << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	try
	{
		Bureaucrat a("Han", 150);
		std::cout << a << std::endl;
		a.increment(50);
		std::cout << a << std::endl;
		a.increment(50);
		a.increment(50);
		a.increment(50);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	try
	{
		Bureaucrat c("Yoda", 1);
		std::cout << c << std::endl;
		c.decrement(50);
		std::cout << c << std::endl;
		c.decrement(50);
		c.decrement(50);
		c.decrement(50);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	return(0);
}