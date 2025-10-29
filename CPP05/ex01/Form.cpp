#include "Form.hpp"
#include "Bureaucrat.hpp" // (pour eviter les ref circulaires)

		Form::Form() : _name("name"), _gradeToSigne(150), _gradeToExecute(150), _signature(0)
		{

		}

		Form::Form(const std::string name, int gradeToSigne, int gradeToExecute)
			:
			_name(name),
			_gradeToSigne(gradeToSigne),
			_gradeToExecute(gradeToExecute),
			_signature(0)
		{
		}

		Form::~Form()
		{

		}

		Form::Form(const Form &copy)
			:
			_name(copy._name),
			_gradeToSigne(copy._gradeToSigne),
			_gradeToExecute(copy._gradeToExecute),
			_signature(0)
		{

		}

		Form &Form::operator=(const Form &copy)
		{
			if (this != &copy)
				_signature = copy._signature;
			return (*this);
		}

		void Form::beSigned(const Bureaucrat &bureaucrat)
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

		std::string Form::getName() const
		{
			return (_name);
		}

		bool Form::getSignature() const
		{
			return(_signature);
		}

		int Form::getGradeToSigne() const
		{
			return(_gradeToSigne);
		}

		int Form::getGradeToExecute() const
		{
			return(_gradeToExecute);
		}

//		void Form::setGradeToSigne(int grade)
//		void Form::setGradeToExecute(int grade)

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low!");
}



std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << form.getName() 
	<< "  GTS " << form.getGradeToSigne() 
	<< "  GTE " << form.getGradeToExecute() 
	<< " sign " << form.getSignature() 
	<< std::endl;
	return (os);
}
