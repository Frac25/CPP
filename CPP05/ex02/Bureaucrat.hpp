#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"


class Bureaucrat
{
	private :
		const std::string _name;
		int _grade;

	public :
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);

		std::string getName() const;
		int getGrade() const;

		void setGrade(int grade);

		void increment(int grade);
		void decrement(int grade);

		//Exceptions
		class GradeTooHighException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		//ajout ex01
		void signAForm(AForm &form) const;

		//ajout ex02
		void executeForm(const AForm &form) const;

};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif
