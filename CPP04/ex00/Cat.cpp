#include "Cat.hpp"

	const std::string GREEN = "\033[32m";
	const std::string RES = "\033[0m";

	Cat::Cat() : Animal()
	{
		_type = "cat";
		std::cout << GREEN << "cat constructor called" << RES << std::endl;
	}

	Cat::~Cat()
	{
		std::cout << GREEN << "cat destructor called" << RES <<std::endl;
	}

	Cat::Cat(Cat &copy) : Animal(copy)
	{
		std::cout << GREEN << "cat copy_constructor called" << RES << std::endl;
	}

	Cat& Cat::operator=(const Cat& copy)
	{
		_type = copy._type;
		std::cout << GREEN << "cat operatot= called" << RES << std::endl;
		return(*this);
	}

	void Cat::makeSound() const
	{
		std::cout << GREEN << "le chat miaule" << RES << std::endl;
	}
