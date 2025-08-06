#include"Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "unnamed";
	return;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " : die" << std::endl;
	return;
}

void Zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ" << std::endl;
	return;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
	return;
}

std::string Zombie::getName(void)
{
	return (this->_name);
}
