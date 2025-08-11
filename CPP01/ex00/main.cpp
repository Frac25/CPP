#include<iostream>
#include"Zombie.hpp"

int main(void)
{
	Zombie *zombi1;

	zombi1 = newZombie("zomb1");
	zombi1->announce();
	delete zombi1;
	randomChump("zomb2");


	return(0);
}
