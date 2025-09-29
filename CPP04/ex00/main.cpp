#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
/*	Animal a;
	std::cout << "a" << "Type = " << a.getType() << std::endl;
	a.makeSound();
	std::cout << std::endl;


	Cat c;
	c.setType("cat");
	c.setType("cat2");
	std::cout << "c" << "Type = " << c.Cat::getType() << std::endl;
	c.makeSound();
	std::cout << std::endl;

*/

	const Animal* meta = new Animal();
	std::cout << "type = " << meta->getType() << std::endl;
	meta->makeSound();
	delete (meta);
	std::cout << std::endl;

	const Animal* i = new Cat();
	std::cout << "type = " << i->getType() << std::endl;
	i->makeSound();
	delete (i);
	std::cout << std::endl;

	const Animal* j = new Dog();
	std::cout << "type = " << j->getType() << std::endl;
	j->makeSound();
	delete (j);
	std::cout << std::endl;

	std::cout << "et la caravanne passe.." << std::endl;



	return(0);
}
