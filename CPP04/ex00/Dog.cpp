#include "Dog.hpp"

	const std::string BLUE = "\033[34m";
	const std::string RES = "\033[0m";

	Dog::Dog() : Animal()
	{
		_type = "Dog";
		std::cout << BLUE << "Dog constructor called" << RES << std::endl;
	}

	Dog::~Dog()
	{
		std::cout << BLUE << "Dog destructor called" << RES <<std::endl;
	}

	Dog::Dog(Dog &copy) : Animal(copy)
	{
		std::cout << BLUE << "Dog copy_constructor called" << RES << std::endl;
	}

	Dog& Dog::operator=(const Dog& copy)
	{
		_type = copy._type;
		std::cout << BLUE << "Dog operatot= called" << RES << std::endl;
		return(*this);
	}

	void Dog::makeSound() const
	{
		std::cout << BLUE << "le chien abboie" << RES << std::endl;
	}
