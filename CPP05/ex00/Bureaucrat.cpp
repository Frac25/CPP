#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("bureaucrat"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{
	setName(name);
	setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) : _name(copy._name), _grade(copy._grade)
{
	
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	_name = copy._name;
	_grade = copy._grade;
	return(*this);
}

std::string Bureaucrat::getName() const
{
	return(_name);
}

void Bureaucrat::setName(const std::string &name)
{
	_name = name;
}

int Bureaucrat::getGrade() const
{
	return(_grade);
}

void Bureaucrat::setGrade(int grade)
{
	if(grade <= 0)
		throw GradeTooHightException();
	if(grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

void increment(int grade)
{
	int new_grade = _grade - grade;

	if(new_grade < 1)
		throw GradeTooHightException();
	if(new_grade > 150)
		throw GradeTooLowException();
	_grade = new_grade;
}

void decrement(int grade)
{
	int new_grade = _grade + grade;

	if(new_grade < 1)
		throw GradeTooHightException();
	if(new_grade > 150)
		throw GradeTooLowException();
	_grade = new_grade;

}

const char *Bureaucrat::GradeTooHightException::what() const throw()
{
	return ("grade too Hight");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too Low");
}