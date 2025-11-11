#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat; // declaration anticipee (pour eviter les ref circulaires)

class Form
{
	private :
		const std::string	_name;
		const int			_gradeToSigne;
		const int			_gradeToExecute;
		bool				_signature;

	public :
		Form();
		Form(const std::string name, int gradeToSigne, int gradeToExecute);
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &copy);

		std::string getName() const;
		bool getSignature() const;
		int getGradeToSigne() const;
		int getGradeToExecute() const;

		void beSigned(const Bureaucrat &bureaucrat);

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

};

std::ostream& operator<<(std::ostream &os, const Form &form);


#endif
