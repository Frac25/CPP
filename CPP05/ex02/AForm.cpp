#include "AForm.hpp"
#include "Bureaucrat.hpp" // (pour eviter les ref circulaires)

	AForm::AForm() : _name("name"), _gradeToSigne(150), _gradeToExecute(150), _signature(0)
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

	void AForm::beSigned(const Bureaucrat &bureaucrat)
	{
		if (bureaucrat.getGrade() <= getGradeToSigne())
		{
			_signature = 1;
			std::cout << bureaucrat.getName() << " signed " << getName() << std::endl;
		}
		else
		{
			std::cout << bureaucrat.getName() << " couldn't sign " << getName() << " because ";
			throw (GradeTooLowException());
		}
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

	void AForm::setGradeToSigne(int grade)
	{
		if(grade < 1)
			throw GradeTooHighException();
		if(grade > 150)
			throw GradeTooLowException();
//		_gradeToSigne = grade;
	}

	void AForm::setGradeToExecute(int grade)
	{
		if(grade < 1)
			throw GradeTooHighException();
		if(grade > 150)
			throw GradeTooLowException();
//		_gradeToExecute = grade;
	}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too High!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too Low!");
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << form.getName()
	<< "  GTS " << form.getGradeToSigne()
	<< "  GTE " << form.getGradeToExecute()
	<< " sign " << form.getSignature()
	<< std::endl;
	return (os);
}
