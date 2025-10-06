#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private :
		const std::string	_name;
		bool				_signature;
		const int			_gradeToSigne;
		const int			_gradeToExecute;

	public :
		Form();
		Form(const std::string name, const int gradeToSigne, const int gradeToExecute);
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &copy);

/*		void beSigned(const Bureaucrat &bureaucrat);

		std::string getName() const;
		bool getSignature() const;
		int getGradeToSigne() const;
		int getGradeToExecute() const;

		void setGradeToSigne(int grade);
		void setGradeToExecute(int grade);

		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};
*/
};

std::ostream& operator<<(std::ostream &os, const Form &form);


#endif
