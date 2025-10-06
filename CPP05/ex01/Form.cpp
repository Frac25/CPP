#include "Form.hpp"

		Form::Form() : _name("name"), _gradeToSigne(150), _gradeToExecute(150), _signature(0)
		{

		}

		Form::Form(const std::string name, const int gradeToSigne, const int gradetoExecute)
		{
			_name = name;
			_signature = 0;
			_gradeToSigne = gradeToSigne;
			_gradeToExecute = gradeToExecute;
		}

		Form::~Form()
		{

		}

		Form::Form(const Form &copy)
		{
			_name = copy.name;
			_signature = 0;
			_gradeToSigne = gradeToSigne;
			_gradeToExecute = gradeToExecute;
		}

		Form &Form::operator=(const Form &copy)

		void Form::beSigned(const Bureaucrat &bureaucrat)

		std::string Form::getName() const
		bool Form::getSignature() const
		int Form::getGradeToSigne() const
		int Form::getGradeToExecute() const
		void Form::setGradeToSigne(int grade)
		void Form::setGradeToExecute(int grade)

/*		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class GradeTooLowexception : public std::exception
		{
			public :
				const char* what() const throw();
		};
*/


std::ostream Form::operator<<(std::ostream &os, const Form &form)
