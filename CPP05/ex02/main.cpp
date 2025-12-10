#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	srand(time(NULL));
	
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

	std::cout << std::endl << "------Robotomize TEST -----" << std::endl<< std::endl;
	try
	{
		Bureaucrat Bureaucrat_4("Bureaucrat_4", 40);
		std::cout << "creation de : " << Bureaucrat_4 << std::endl;
		RobotomyRequestForm Robot_form1("toto");
		std::cout << "creation de : " << Robot_form1 << std::endl;

		Bureaucrat_4.signAForm(Robot_form1);
		std::cout << Robot_form1 << std::endl;
		Bureaucrat_4.executeForm(Robot_form1);

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

		std::cout << std::endl << "------pardon TEST -----" << std::endl<< std::endl;
	try
	{
		Bureaucrat Bureaucrat_5("Bureaucrat_4", 3);
		std::cout << "creation de : " << Bureaucrat_5 << std::endl;
		PresidentialPardonForm pardon_form1("sylvain");
		std::cout << "creation de : " << pardon_form1 << std::endl;

		Bureaucrat_5.signAForm(pardon_form1);
		std::cout << pardon_form1 << std::endl;
		Bureaucrat_5.executeForm(pardon_form1);

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

return(0);
}
