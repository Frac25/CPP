#ifndef DIAMONDTRAP_HPP
 #define DIAMONDTRAP_HPP

#include<iostream>
#include"ScavTrap.hpp"
#include"FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{

public :
DiamondTrap();
~DiamondTrap();
DiamondTrap(const DiamondTrap& copy);
DiamondTrap& operator=(const DiamondTrap& copy);

DiamondTrap(const std::string name);

void attack(const std::string& target);
void whoAmI();
void stats(void);

private :

std::string _name;

};
#endif
