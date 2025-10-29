#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "------TEST AVEC BE SIGNED------" << std::endl<< std::endl;
	try
	{

		Bureaucrat a("Yoda", 1);
		std::cout << a << std::endl;
		Form f1("Formulaire_1", 10, 20);
		std::cout << f1 << std::endl;
		f1.beSigned(a);
		std::cout << f1 << std::endl;

		Bureaucrat b("han", 100);
		std::cout << b << std::endl;
		Form f2("Formulaire_2", 10, 20);
		std::cout << f2 << std::endl;
		f2.beSigned(b);
		std::cout << f2 << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}


	std::cout << std::endl << "------TEST AVEC SIGNFORM------" << std::endl<< std::endl;

	try
	{

		Bureaucrat a("Yoda", 1);
		std::cout << a << std::endl;
		Form f1("Formulaire_1", 10, 20);
		std::cout << f1 << std::endl;
		a.signForm(f1);
		std::cout << f1 << std::endl;

		Bureaucrat b("han", 100);
		std::cout << b << std::endl;
		Form f2("Formulaire_2", 10, 20);
		std::cout << f2 << std::endl;
		b.signForm(f2);
		std::cout << f2 << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	std::cout << std::endl << "------TEST Grad to sign too low------" << std::endl<< std::endl;

	try
	{

		Bureaucrat a("Yoda", 1);
		std::cout << a << std::endl;
		Form f1("Formulaire_1", 1000, 20);
		std::cout << f1 << std::endl;
		a.signForm(f1);
		std::cout << f1 << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

		std::cout << std::endl << "------TEST Grad to sign too hight------" << std::endl<< std::endl;

	try
	{

		Bureaucrat a("Yoda", 1);
		std::cout << a << std::endl;
		Form f1("Formulaire_1", 0, 20);
		std::cout << f1 << std::endl;
		a.signForm(f1);
		std::cout << f1 << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

	std::cout << std::endl << "------TEST Grad to execute too low------" << std::endl<< std::endl;

	try
	{

		Bureaucrat a("Yoda", 1);
		std::cout << a << std::endl;
		Form f1("Formulaire_1", 100, 1000);
		std::cout << f1 << std::endl;
		a.signForm(f1);
		std::cout << f1 << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

		std::cout << std::endl << "------TEST Grad to execute too hight------" << std::endl<< std::endl;

	try
	{

		Bureaucrat a("Yoda", 1);
		std::cout << a << std::endl;
		Form f1("Formulaire_1", 100, 0);
		std::cout << f1 << std::endl;
		a.signForm(f1);
		std::cout << f1 << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what( ) << std::endl;
	}

return(0);
}