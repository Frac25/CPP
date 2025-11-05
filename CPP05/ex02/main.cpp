#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
	std::cout << "------TEST ------" << std::endl<< std::endl;
	try
	{
		std::cout << "test" << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

return(0);
}
