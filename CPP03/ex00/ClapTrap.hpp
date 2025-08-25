#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
	public :

		ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& copy);
		~ClapTrap();

		ClapTrap(const std::string name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//getteur et setteurs
		std::string& getName(void);
		void setName(std::string name);
		int& getHealthPoint(void);
		void setHealthPoint(int amount);
		int& getEnergyPoint(void);
		void setEnergyPoint(int amount);
		int& getAttackDamage(void);
		void setAttackDamage(int amount);

	private :
		std::string _name;
		int _health_point;
		int _energy_point;
		int _attack_damage;

};

#endif
