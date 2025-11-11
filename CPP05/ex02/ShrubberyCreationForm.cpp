#include"ShrubberyCreationForm.hpp"
#include"Bureaucrat.hpp"
#include <string>
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubby_form_default",145,137), _target("target_default")
{
	//std::ofstream outfile(_target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("Shrubby_form_default",145,137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : AForm(copy), _target(copy._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
//	*this = copy; //v1
//	_target = copy._target; //v1

	setSignature(copy.getSignature()); //v2
	_target = copy._target; //v2

	return(*this);
}

void ShrubberyCreationForm::execute_form_action(void)const
{
	std::ofstream outfile((_target + "_shruby"));
	if(outfile)
	{
		outfile << "\\/\\/\\/\\/" << std::endl;
		outfile << " \\/  \\/ " << std::endl;
		outfile << "  \\  /  " << std::endl;
		outfile << "   ||   " << std::endl;
		outfile << "   ||   " << std::endl;
		outfile << "   ||   " << std::endl;
		outfile.close();
		std::cout << " created a new file : " << (_target + "_shruby") << std::endl;
	}
	else
		throw ShrubberyCreationForm::OpenFileExeption();
}

const char *ShrubberyCreationForm::OpenFileExeption::what() const throw()
{
	return ("file not created!");
}
