#include"RobotomyRequestForm.hpp"
#include"Bureaucrat.hpp"
#include <string>
#include <fstream>


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",72,45), _target("target_default")
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : AForm("RobotomyRequestForm",72,45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy) : AForm(copy), _target(copy._target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & copy)
{
	setSignature(copy.getSignature());
	_target = copy._target;
	return(*this);
}

void RobotomyRequestForm::execute_form_action(void)const
{
	int i = (rand() % 2);

	std::cout << " makes some drilling noise: " << std::endl;
	if (i == 1)
	{
		std::cout << _target << " has been robotomized" << std::endl;
	}

	else
		throw RobotomyRequestForm::FailedExeption();
}

const char *RobotomyRequestForm::FailedExeption::what() const throw()
{
	return ("the robotomy failed!");
}
