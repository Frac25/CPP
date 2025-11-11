#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

	private :
	std::string _target;

	public :

	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(const ShrubberyCreationForm & copy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm & copy);

	void execute_form_action(void) const;

	class OpenFileExeption : public std::exception
	{
		public :
			const char* what() const throw();
	};
};


#endif
