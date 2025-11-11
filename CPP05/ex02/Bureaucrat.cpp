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
	if(grade < 1)
		throw GradeTooHighException();
	if(grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

void Bureaucrat::increment(int grade)
{
	int new_grade = _grade - grade;

	if(new_grade < 1)
		throw GradeTooHighException();
	if(new_grade > 150)
		throw GradeTooLowException();
	_grade = new_grade;
}

void Bureaucrat::decrement(int grade)
{
	int new_grade = _grade + grade;

	if(new_grade < 1)
		throw GradeTooHighException();
	if(new_grade > 150)
		throw GradeTooLowException();
	_grade = new_grade;

}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low!");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other)
{
	os << other.getName() << ", grade : " << other.getGrade();
	return (os);
}

//ajout ex01
void Bureaucrat::signAForm(AForm &form)
{
	form.beSigned(*this);
}

//ajout ex02
void Bureaucrat::executeForm(const AForm &form) const
{
	try
	{
	//if(new_grade < 1)
	//	throw GradeTooHighException();
	//if(new_grade > 150)
	//	throw GradeTooLowException();
		form.execute(*this);
		std::cout << _name << "executed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
