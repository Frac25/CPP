#ifndef SCAVTRAP_HPP
 #define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &copy);

		ScavTrap(const std::string name);

		void attack(const std::string& target);
		void stats(void);
		void guardGate(void);

	private :
		bool _guard;


};



#endif
