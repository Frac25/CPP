#ifndef INTERN_HPP
# define INTERN_HPP

#include<iostream>
#include"AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public :

	Intern();
	~Intern();
	Intern(const Intern &copy);
	Intern& operator=(const Intern &copy);

	AForm* makeForm(const std::string& name_form, const std::string& target_form);

};

#endif
