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
	u.attack("brook");

	return(0);
}
