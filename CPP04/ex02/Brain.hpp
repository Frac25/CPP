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
		Brain(const Brain& copy);
		Brain& operator=(const Brain& copy);

		std::string Ideas[100];

};


#endif
