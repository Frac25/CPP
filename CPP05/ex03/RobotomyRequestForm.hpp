#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

	private :
	std::string _target;

	public :

	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const std::string & target);
	RobotomyRequestForm(const RobotomyRequestForm & copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm & copy);

	void execute_form_action(void) const;

	class FailedExeption : public std::exception
	{
		public :
			const char* what() const throw();
	};
};


#endif
