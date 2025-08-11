#include<iostream>
#include"Zombie.hpp"

int main(void)
{
	Zombie* zombih = NULL;
	int i = 0;
	int n = 10;

	zombih = zombieHorde(n , "zombich");

	while (i < n)
	{
		zombih[i].announce();
		i++;
	}
	delete[] zombih;

	return(0);
}
