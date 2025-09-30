#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);

		void makeSound() const;

		void setIdea(int num, std::string Idea);
		std::string getIdea(int idea_num) const;

	private :
		Brain* _brain;
};


#endif
