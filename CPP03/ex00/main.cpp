#include"ClapTrap.hpp"

int main(void)
{
	ClapTrap l("Luffy");
	ClapTrap z("Zoro");
	ClapTrap s(l);
	ClapTrap u;
	s.setName("Sanji");
	u = z;
	u.setName("Usop");

	std::cout << std::endl;

	l.attack("nami");
	z.attack("robin");
	s.attack("franki");

	std::cout << std::endl;

	for (int i = 1; i < 13; i++)
	{
		std::cout << i << " ";
		u.attack("brook");
	}
	std::cout << std::endl;

	l.beRepaired(2);
	l.takeDamage(2);
	l.takeDamage(9);
	l.takeDamage(1);
	l.takeDamage(1);
	l.takeDamage(1);
	std::cout << std::endl;


	return(0);
}
