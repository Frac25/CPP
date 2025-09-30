#include "Dog.hpp"

	const std::string COLOR = "\033[34m";
	const std::string RES = "\033[0m";

	Dog::Dog() : Animal()
	{
		std::cout << COLOR << "Dog constructor called" << RES << std::endl;
		_type = "Dog";
		_brain = new Brain();
	}

	Dog::~Dog()
	{
		std::cout << COLOR << "Dog destructor called" << RES <<std::endl;
		delete _brain;
	}

	Dog::Dog(const Dog &copy) : Animal(copy)
	{
		std::cout << COLOR << "Dog copy_constructor called" << RES << std::endl;
		_brain = new Brain(*(copy._brain));
	}

	Dog& Dog::operator=(const Dog& copy)
	{
		std::cout << COLOR << "Dog operator= called" << RES << std::endl;
		if(this != &copy)
		{
			Animal::operator=(copy);
			delete _brain;
			_brain = new Brain(*(copy._brain));

		}
		else
			std::cout << COLOR << "Dog operator= failed" << RES << std::endl;
		return(*this);
	}

	void Dog::makeSound() const
	{
		std::cout << COLOR << "Wouf" << RES << std::endl;
	}

	std::string Dog::getIdea(int num) const
	{
		if(num > 100 || num < 0)
			return("0 < num < 100");
		return(_brain->Ideas[num]);
	}

	void Dog::setIdea(int num, std::string Idea)
	{
		std::cout << COLOR << "setIdea called" << RES << std::endl;
		_brain->Ideas[num] = Idea;
	}
