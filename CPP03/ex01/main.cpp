#include"ScavTrap.hpp"

int main(void)
{

	ScavTrap la("Lanfeust");
	la.stats();
	std::cout << std::endl;

	ScavTrap ni(la);
	ni.setName("Nicolede");
	ni.stats();
	std::cout << std::endl;

	ScavTrap he("Hebus");
	he.stats();
	ScavTrap ta;
	ta.setName("Tanos");
	ta.stats();
	he.attack("cian");
	he.stats();
	ta = he;
	ta.stats();
	std::cout << std::endl << std::endl;

	ta.attack("cixi");
	ta.stats();

	std::cout << std::endl;

	la.stats();
	la.guardGate();
	la.beRepaired(2);
	la.takeDamage(2);
	la.takeDamage(99);
	la.stats();
	la.takeDamage(1);
	la.takeDamage(1);
	la.takeDamage(1);

	std::cout << std::endl;


	return(0);
}
