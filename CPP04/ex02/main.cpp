#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{

	std::cout << "---TEST1---" << std::endl;
	const Animal* ac  = new Cat();
	ac->makeSound();
	std::cout << "cat's idea 5 = " << ac->getIdea(5) << std::endl;
	delete ac;
	std::cout << std::endl;

	const Animal* ad  = new Dog();
	ad->makeSound();
	std::cout << "dog's idea 6 = " << ad->getIdea(6) << std::endl;
	delete ad;
	std::cout << std::endl;


	std::cout << "---TEST2---" << std::endl;
//	Animal *a = new Animal();
	std::cout << std::endl;

	return(0);

}


