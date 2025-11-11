#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << std::endl << "------Intern TEST ------" << std::endl<< std::endl;
	try
	{
		Intern intern_1;
		intern_1.makeForm("PresidentialPardonForm", "Loic");
		intern_1.makeForm("Super_Form", "Loic");

		AForm* form_2;
		form_2 = intern_1.makeForm("RobotomyRequestForm", "Loic");
		std::cout << form_2->getName() << " created" << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	return(0);
}
