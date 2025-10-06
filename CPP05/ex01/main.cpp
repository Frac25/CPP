#include "Bureaucrat.hpp"

int main(void)
{
	try
	{

		Bureaucrat a("Han", 150);
		std::cout << a << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}
}