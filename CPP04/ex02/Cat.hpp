#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public :
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);

		void makeSound() const;

		std::string getIdea(int idea_num) const;
		void setIdea(int num, std::string Idea);

	private :
		Brain* _brain;
};


#endif
