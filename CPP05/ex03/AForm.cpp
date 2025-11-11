#include "AForm.hpp"
#include "Bureaucrat.hpp" // (pour eviter les ref circulaires)

AForm::AForm() : _name("bureaucrat_name_default"), _gradeToSigne(150), _gradeToExecute(150), _signature(0)
{
}

AForm::AForm(const std::string name, int gradeToSigne, int gradeToExecute)
:
_name(name),
_gradeToSigne(gradeToSigne),
_gradeToExecute(gradeToExecute),
_signature(0)
{
	if(gradeToSigne < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if(gradeToSigne > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::~AForm()
{
}

AForm::AForm(const AForm &copy)
:
_name(copy._name),
_gradeToSigne(copy._gradeToSigne),
_gradeToExecute(copy._gradeToExecute),
_signature(0)
{
}

AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy)
		_signature = copy._signature;
	return (*this);
}

std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getSignature() const
{
	return(_signature);
}

int AForm::getGradeToSigne() const
{
	return(_gradeToSigne);
}

int AForm::getGradeToExecute() const
{
	return(_gradeToExecute);
}

void AForm::setSignature(int i)
{
	_signature = i;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSigne())
	{
		_signature = 1;
		std::cerr << bureaucrat.getName() << " signed " << getName() << std::endl;
	}
	else
	{
		std::cerr << bureaucrat.getName() << " couldn't sign " << getName() << " because ";
		throw (GradeTooLowException());
	}
}

void AForm::execute(Bureaucrat const &executor) const
{
//	std::cout << "check  grade to execute and signature" << std::endl;
	if (executor.getGrade() <= getGradeToExecute())
	{
		if (_signature == 0)
			throw (NotSignedException());
		std::cout << "execute : " << executor.getName();
		execute_form_action();
	}
	else
	{
		throw (GradeTooLowException());
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too High!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too Low!");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << form.getName()
	<< "  GTS " << form.getGradeToSigne()
	<< "  GTE " << form.getGradeToExecute()
	<< " sign " << form.getSignature();
	return (os);
}
