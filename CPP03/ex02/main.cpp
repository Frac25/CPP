#include"FragTrap.hpp"

int main(void)
{

	FragTrap la("Lanfeust");
	la.stats();
	std::cout << std::endl;

	FragTrap ni(la);
	ni.setName("Nicolede");
	ni.stats();
	std::cout << std::endl;

	FragTrap he("Hebus");
	he.stats();
	FragTrap ta;
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
	la.hightFivesGuys();
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
