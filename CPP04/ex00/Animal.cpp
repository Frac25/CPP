#include "Animal.hpp"


	Animal::Animal()
	{
		_type = "default_Animal_type";
		std::cout << "Animal constructor called" << std::endl;
	}

	Animal::~Animal()
	{
		std::cout << "Animal destructor called" << std::endl;
	}

	Animal::Animal(Animal &copy) : _type(copy._type)
	{
		std::cout << "Animal copy constructor called" << std::endl;
	}
	
	Animal& Animal::operator=(Animal &copy)
	{
		std::cout << "Animal operator= called" << std::endl;
		_type = copy._type;
		return(*this);
	}

	std::string& Animal::getType()
	{
		return(_type);
	}

	void Animal::setType(std::string type)
	{
		_type = type;
	}


