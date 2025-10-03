#ifndef BUREAUCRAT_HPP
# define BUREAUCRATE_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private :
		std::string _name;
		int _grade;
	
	public :
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);

		std::string getName() const;
		void setName(const std::string &name);

		int getGrade() const;
		void setGrade(int grade);

		void increment(int grade);
		void decrement(int grade);

		//Exceptions
		class GradeTooHightException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw();
		};

};


#endif