#ifndef HUMANA_HPP
 #define HUMANA_HPP

#include<iostream>
#include"Weapon.hpp"

class HumanA
{
	public :

	HumanA();
	HumanA(std::string p1, Weapon p2);
	~HumanA(void);

	Weapon club;
	std::string name;

	void attack(void);

};

#endif