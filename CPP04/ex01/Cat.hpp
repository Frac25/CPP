#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public :

		Cat();
		~Cat();
		Cat(Cat &copy);
		Cat& operator=(const Cat &copy);

		void makeSound() const;

		std::string getIdea(int idea_num);

	private :
		Brain* _brain;
};


#endif
