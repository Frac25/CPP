#include"HumanA.hpp"
#include"Weapon.hpp"

HumanA::HumanA()
{
	this->name = "toto";
	this->club = Weapon();
	return;
}

HumanA::HumanA(std::string p1, Weapon p2)
{
	this->name = p1;
	this->club = p2;
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << club.getType() << std::endl;
	return;
}