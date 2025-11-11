#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat; // declaration anticipee (pour eviter les ref circulaires)

class AForm
{
	private :
		const std::string	_name;
		const int			_gradeToSigne;
		const int			_gradeToExecute;
		bool				_signature;

	public :
		AForm();
		AForm(const std::string name, int gradeToSigne, int gradeToExecute);
		virtual ~AForm();//ajout de virtual
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);

		void beSigned(const Bureaucrat &bureaucrat);

		std::string getName() const;
		bool getSignature() const;
		int getGradeToSigne() const;
		int getGradeToExecute() const;

		void setGradeToSigne(int grade);
		void setGradeToExecute(int grade);

		void execute(Bureaucrat const &executor) const;
		virtual void execute_form_action() const = 0; //virtuel pure


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

std::ostream& operator<<(std::ostream &os, const AForm &form);


#endif
