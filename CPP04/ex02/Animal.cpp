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

	Animal::Animal(const Animal &copy) : _type(copy._type)
	{
		std::cout << RED << "Animal copy constructor called" << RES << std::endl;
	}

	Animal& Animal::operator=(const Animal &copy)
	{
		std::cout << RED << "Animal operator= called" << RES << std::endl;
		_type = copy._type;
		return(*this);
	}

	void Animal::makeSound() const
	{
		std::cout << RED << "An animal make sound" << RES << std::endl;
	}

	std::string Animal::getIdea(int num) const
	{
		(void)num;
		return("animals don't have Ideas");
	}

	void Animal::setIdea(int num, std::string Idea)
	{
		(void)num;
		(void)Idea;
	}

	const std::string& Animal::getType() const
	{
		return (_type);
	}

	void Animal::setType(std::string type)
	{
		_type = type;
	}



