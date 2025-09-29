#include "Animal.hpp"

	const std::string RED = "\033[31m";
	const std::string RES = "\033[0m";

	Animal::Animal()
	{
		_type = "Animal";
		std::cout << RED << "Animal constructor called" << RES << std::endl;
	}

	Animal::~Animal()
	{
		std::cout << RED << "Animal destructor called" << RES << RES << std::endl;
	}

	Animal::Animal(Animal &copy) : _type(copy._type)
	{
		std::cout << RED << "Animal copy constructor called" << RES << std::endl;
	}

	Animal& Animal::operator=(Animal &copy)
	{
		std::cout << RED << "Animal operator= called" << RES << std::endl;
		_type = copy._type;
		return(*this);
	}

	void Animal::makeSound() const
	{
		std::cout << RED << "An animal make sound" << RES << std::endl;
	}

	const std::string& Animal::getType() const
	{
		return (_type);
	}

	void Animal::setType(std::string type)
	{
		_type = type;
	}


