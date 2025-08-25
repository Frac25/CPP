#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
	public :

		//canonical form
		ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& copy);
		~ClapTrap();

		//other contructors
		ClapTrap(const std::string name);

		//member fonctions (ou méthode)
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void stats(void);

		//getters and setters
		std::string& getName(void);
		void setName(std::string name);
		int& getHealthPoint(void);
		void setHealthPoint(int amount);
		int& getEnergyPoint(void);
		void setEnergyPoint(int amount);
		int& getAttackDamage(void);
		void setAttackDamage(int amount);

	protected :
		std::string _name;
		int _health_point;
		int _energy_point;
		int _attack_damage;

};

int check_hp(ClapTrap &t);
int check_ep(ClapTrap &t);

#endif
