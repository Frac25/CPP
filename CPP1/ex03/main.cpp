#include<iostream>
#include"HumanA.hpp"
//#include"Weapon.hpp"

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("fight club");
		bob.attack();
	}
/*
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("fight club")
		jim.attack();
	}
*/

	return(0);
}
