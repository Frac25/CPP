#include"PresidentialPardonForm.hpp"
#include"Bureaucrat.hpp"
#include <string>
#include <fstream>


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",25,5), _target("target_default")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : AForm("PresidentialPardonForm",25,5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) : AForm(copy), _target(copy._target)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & copy)
{
	setSignature(copy.getSignature());
	_target = copy._target;
	return(*this);
}

void PresidentialPardonForm::execute_form_action(void)const
{
	std::cout << " inform us that " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

