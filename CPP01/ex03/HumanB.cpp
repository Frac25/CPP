#include"HumanB.hpp"

HumanB::HumanB(std::string p1) : name(p1), _weapon(NULL)
{

}

HumanB::~HumanB(void)
{

}

void HumanB::setWeapon(Weapon &p2)
{
	this->_weapon = &p2;
}

void HumanB::attack(void)
{
	if(_weapon)
		std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << name << " has no club " << std::endl;
}
