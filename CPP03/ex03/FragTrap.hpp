#ifndef FRAGTRAP_HPP
 #define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap &operator=(const FragTrap &copy);

		FragTrap(const std::string name);

		void hightFivesGuys(void);

};



#endif
