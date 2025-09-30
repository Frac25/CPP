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
	Animal *a[4];

	a[0] = new Cat();
	a[1] = new Dog();
	a[2] = new Cat();
	a[3] = new Dog();
	std::cout << std::endl;

	a[2]->setIdea(2, "Idea2 set to a[2]");

	for(int i = 0; i < 4; i++)
	{
		std::cout << "type = " << a[i]->getType() << std::endl;
		a[i]->makeSound();
		std::cout << "Idea" << i << " = " << a[i]->getIdea(i) << std::endl;
		std::cout << "Idea" << i + 1 << " = " << a[i]->getIdea(i+1) << std::endl;
		std::cout << "/" << std::endl;
	}
	std::cout << std::endl;

	for(int i = 0; i < 4; i++)
	{
		delete (a[i]);
	}
	std::cout << std::endl;


	std::cout << "---TEST3---" << std::endl;
	Cat* cat1  = new Cat();
	cat1->makeSound();
	std::cout << "cat1's idea 5 = " << cat1->getIdea(5) << std::endl;
	std::cout << std::endl;
	cat1->setIdea(5, "Idea5 set to cat1 before copy");

	Cat* cat2 = new Cat(*cat1);
	cat2->makeSound();
	std::cout << "cat2's idea 5 = " << cat2->getIdea(5) << std::endl;
	std::cout << std::endl;

	cat1->setIdea(5, "Idea5 set to cat1 after copy");
	std::cout << "cat1's idea 5 = " << cat1->getIdea(5) << std::endl;
	std::cout << "cat2's idea 5 = " << cat2->getIdea(5) << std::endl;
	std::cout << std::endl;

	delete cat1;
	delete cat2;
	std::cout << std::endl;

	std::cout << "---TEST4---" << std::endl;
	Dog* dog3  = new Dog();
	dog3->makeSound();
	std::cout << "dog3's idea 5 = " << dog3->getIdea(5) << std::endl;
	std::cout << std::endl;

	Dog* dog4 = new Dog();
	*dog4 = *dog3;
	dog4->makeSound();
	std::cout << "dog4's idea 5 = " << dog4->getIdea(5) << std::endl;
	std::cout << std::endl;

	dog3->setIdea(5, "Idea5 set to dog3 after copy");
	std::cout << "dog3's idea 5 = " << dog3->getIdea(5) << std::endl;
	std::cout << "dog4's idea 5 = " << dog4->getIdea(5) << std::endl;
	std::cout << std::endl;

	delete dog3;
	delete dog4;
	std::cout << std::endl;

	std::cout << "---TEST5---" << std::endl;
	Animal* cat5  = new Cat();
	cat5->makeSound();
	std::cout << "cat5's idea 5 = " << cat5->getIdea(5) << std::endl;
	std::cout << std::endl;

	Animal* cat6 = new Cat(*(dynamic_cast<Cat*>(cat5)));
	cat6->makeSound();
	std::cout << "cat6's idea 5 = " << cat6->getIdea(5) << std::endl;
	std::cout << std::endl;

	delete cat5;
	delete cat6;
	std::cout << std::endl;

	return(0);

}


