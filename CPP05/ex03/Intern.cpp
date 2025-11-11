#include"Intern.hpp"
#include"Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void)&copy;
}

Intern& Intern::operator=(const Intern &copy)
{
	(void)&copy;
	return(*this);
}

AForm* Intern::makeForm(const std::string& name_form, const std::string& target_form)
{
	int i = 0;
	std::string form[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	while(i < 3 && name_form != form[i])
			i++;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << name_form << std::endl;
			return(new ShrubberyCreationForm(target_form));
			break;

		case 1:
			std::cout << "Intern creates " << name_form << std::endl;
			return(new RobotomyRequestForm(target_form));
			break;

		case 2:
			std::cout << "Intern creates " << name_form << std::endl;
			return(new PresidentialPardonForm(target_form));
			break;

		default:
			std::cout << name_form  << " doesn't exist! "<< std::endl;
			return(NULL);
			break;
	}
}
