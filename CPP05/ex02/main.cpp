#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << std::endl << "------Shrubby TEST ------" << std::endl<< std::endl;
	try
	{
		Bureaucrat Bureaucrat_1("Bureaucrat_1", 100);
		std::cout << "creation de : " << Bureaucrat_1 << std::endl;
		ShrubberyCreationForm Shrubby_form1("tree_1");
		std::cout << "creation de : " << Shrubby_form1 << std::endl;

		Bureaucrat_1.signAForm(Shrubby_form1);
		std::cout << Shrubby_form1 << std::endl;

		Bureaucrat_1.executeForm(Shrubby_form1);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	std::cout << std::endl << "------Shrubby TEST 2 : not signed------" << std::endl<< std::endl;
	try
	{
		Bureaucrat Bureaucrat_2("Bureaucrat_2", 100);
		std::cout << "creation de : " << Bureaucrat_2 << std::endl;
		ShrubberyCreationForm Shrubby_form2("tree_2");
		std::cout << "creation de : " << Shrubby_form2 << std::endl;

		Bureaucrat_2.executeForm(Shrubby_form2);

		Bureaucrat_2.signAForm(Shrubby_form2);
		std::cout << Shrubby_form2 << std::endl;

		Bureaucrat_2.executeForm(Shrubby_form2);

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	std::cout << std::endl << "------Shrubby TEST 3 : grade too low------" << std::endl<< std::endl;
	try
	{
		Bureaucrat Bureaucrat_3("Bureaucrat_3", 143);
		std::cout << "creation de : " << Bureaucrat_3 << std::endl;
		ShrubberyCreationForm Shrubby_form3("tree_2");
		std::cout << "creation de : " << Shrubby_form3 << std::endl;

		Bureaucrat_3.signAForm(Shrubby_form3);
		std::cout << Shrubby_form3 << std::endl;
		Bureaucrat_3.executeForm(Shrubby_form3);

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

return(0);
}
