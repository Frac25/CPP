#include"ShrubberyCreationForm.hpp"
#include"Bureaucrat.hpp"
#include <string>
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137), _target("target_default")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("ShrubberyCreationForm",145,137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : AForm(copy), _target(copy._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
	setSignature(copy.getSignature());
	_target = copy._target;
	return(*this);
}

void ShrubberyCreationForm::execute_form_action(void)const
{
	std::ofstream outfile((_target + "_shrubbery"));
	if(outfile)
	{
		outfile << "\\/\\/\\/\\/" << std::endl;
		outfile << " \\/  \\/ " << std::endl;
		outfile << "  \\  /  " << std::endl;
		outfile << "   ||   " << std::endl;
		outfile << "   ||   " << std::endl;
		outfile << "   ||   " << std::endl;
		outfile.close();
		std::cout << " created a new file : " << (_target + "_shrubbery") << std::endl;
	}
	else
		throw ShrubberyCreationForm::OpenFileExeption();
}

const char *ShrubberyCreationForm::OpenFileExeption::what() const throw()
{
	return ("file not created!");
}
