#ifndef HUMANA_HPP
 #define HUMANA_HPP

#include<iostream>
#include"Weapon.hpp"

class HumanA
{
	public :
	HumanA(std::string p1, Weapon& p2);
	~HumanA(void);

	std::string	name;
	Weapon		&weapon1;

	void attack(void);

};

#endif
