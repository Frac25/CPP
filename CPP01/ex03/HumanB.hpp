#ifndef HUMANB_HPP
 #define HUMANB_HPP

#include<iostream>
#include"Weapon.hpp"

class HumanB
{
	public :
	HumanB(std::string p1);
	~HumanB(void);

	std::string	name;

	void attack(void);
	void setWeapon(Weapon &p2);

	private :
	Weapon*	_weapon;

};

#endif
