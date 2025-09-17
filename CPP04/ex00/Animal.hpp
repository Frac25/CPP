#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
	Animal();
	~Animal();
	Animal(Animal &copy);
	Animal &operator=(Animal &copy);

	std::string& getType();
	void setType(std::string type);


	private :
	std::string _type;
};

#endif