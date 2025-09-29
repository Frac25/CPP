#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

char	*ft_itoa(int n);

class Brain
{
	public :
		Brain();
		~Brain();
		Brain(Brain& copy);
		Brain& operator=(Brain& copy);

		std::string Ideas[100];

};


#endif
