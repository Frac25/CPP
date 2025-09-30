#include "Cat.hpp"

	const std::string GREEN = "\033[32m";
	const std::string RES = "\033[0m";

	Cat::Cat() : Animal()
	{
		std::cout << GREEN << "cat constructor called" << RES << std::endl;
		_type = "cat";
		_brain = new Brain();
	}

	Cat::~Cat()
	{
		std::cout << GREEN << "cat destructor called" << RES <<std::endl;
		delete _brain;
	}

	Cat::Cat(const Cat &copy) : Animal(copy)
	{
		std::cout << GREEN << "cat copy_constructor called" << RES << std::endl;
		_brain = new Brain(*(copy._brain));

	}

	Cat& Cat::operator=(const Cat& copy)
	{
		std::cout << GREEN << "cat operator= called" << RES << std::endl;
		if(this != &copy)
		{
			Animal::operator=(copy);
			delete _brain;
			_brain = new Brain(*(copy._brain));
		}
		else
			std::cout << GREEN << "cat operator= failed" << RES << std::endl;
		return(*this);
	}

	void Cat::makeSound() const
	{
		std::cout << GREEN << "Miaou" << RES << std::endl;
	}

	std::string Cat::getIdea(int num) const
	{
		if(num > 100 || num < 0)
			return("0 < num < 100");
		return(_brain->Ideas[num]);
	}

	void Cat::setIdea(int num, std::string Idea)
	{
		std::cout << GREEN << "setIdea called" << RES << std::endl;
		_brain->Ideas[num] = Idea;
	}
