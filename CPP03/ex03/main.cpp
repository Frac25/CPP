#include"DiamondTrap.hpp"

int main(void)
{

	DiamondTrap a("Alphonse");
	std::cout << std::endl;

	a.whoAmI();
	a.stats();
	a.setEnergyPoint(100);
	a.stats();
	a.attack("Edward");
	a.takeDamage(50);
	a.stats();
	a.beRepaired(10);
	a.guardGate();
	a.stats();
	a.hightFivesGuys();
	a.stats();

	std::cout << std::endl;
	return(0);
}
