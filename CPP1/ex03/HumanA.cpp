#include"HumanA.hpp"

HumanA::HumanA(std::string p1, Weapon &p2) : name(p1), weapon1(p2)
{

}

HumanA::~HumanA(void)
{

}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon1.getType() << std::endl;
	return;
}
