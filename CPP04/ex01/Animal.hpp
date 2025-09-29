#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :

		Animal();
		virtual ~Animal();
		Animal(Animal &copy);
		Animal &operator=(Animal &copy);

		const std::string& getType() const;
		void setType(std::string type);

		virtual void makeSound() const;

	protected :
		std::string _type;
};

#endif
