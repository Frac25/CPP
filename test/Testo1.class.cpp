#include<iostream>
#include "Testo1.class.hpp"

Testo1::Testo1(char p1, int p2, float p3)
{
	std::cout << "Appel du constructeur" << std::endl;
	this->var1 = p1;
	this->var2 = p2;
	this->var3 = p3;

	this->fct1();
	return;
}

Testo1::~Testo1(void)
{
	std::cout << "Appel du destructeur" << std::endl;
	return;
}

void Testo1::fct1(void)
{
	std::cout << "utilisation de la fonction 1" << std::endl;
	return;
}
