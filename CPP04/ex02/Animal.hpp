#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :

		Animal();
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);

		const std::string& getType() const;
		void setType(std::string type);

		virtual void makeSound() const = 0; //virtuelle pure

		virtual std::string getIdea(int num) const;
		virtual void setIdea(int num, std::string Idea);

	protected :
		std::string _type;
};

#endif
