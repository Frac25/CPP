#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << "------Shrubby TEST ------" << std::endl<< std::endl;
	try
	{
		Bureaucrat Bureaucrat_1("Bureaucrat_1", 140);
		std::cout << "creation de : " << Bureaucrat_1 << std::endl;
		ShrubberyCreationForm Shrubby_form1("tree_1");
		std::cout << "creation de : " << Shrubby_form1 << std::endl;

		Bureaucrat_1.signAForm(Shrubby_form1);
		std::cout << Shrubby_form1 << std::endl;

		Bureaucrat_1.executeForm(Shrubby_form1);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

return(0);
}
