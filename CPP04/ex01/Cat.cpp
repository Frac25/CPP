#include "Cat.hpp"

	const std::string GREEN = "\033[32m";
	const std::string RES = "\033[0m";

	Cat::Cat() : Animal()
	{
		_type = "cat";
		_brain = new Brain();
		std::cout << GREEN << "cat constructor called" << RES << std::endl;
	}

	Cat::~Cat()
	{
		delete _brain;
		std::cout << GREEN << "cat destructor called" << RES <<std::endl;
	}

	Cat::Cat(Cat &copy) : Animal(copy)
	{
		_brain = new Brain(*(copy._brain));
		std::cout << GREEN << "cat copy_constructor called" << RES << std::endl;
	}

	Cat& Cat::operator=(const Cat& copy)
	{
		_type = copy._type;
		delete _brain;
		_brain = new Brain(*(copy._brain));
		std::cout << GREEN << "cat operatot= called" << RES << std::endl;
		return(*this);
	}

	void Cat::makeSound() const
	{
		std::cout << GREEN << "Miaou" << RES << std::endl;
	}

	std::string Cat::getIdea(int num)
	{
		if(num > 100 || num < 0)
			return("0 < num < 100");
		return(_brain->Ideas[num]);
	}
