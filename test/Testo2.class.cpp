#include<iostream>
#include "Testo2.class.hpp"

Testo2::Testo2(char p1, int p2, float p3) :
var1(p1),
var2(p2),
var3(p3)
{
	std::cout << "Appel du constructeur2" << std::endl;

	return;
}

Testo2::~Testo2(void)
{
	std::cout << "Appel du destructeur2" << std::endl;
	return;
}

void Testo2::fct1(void)
{
	std::cout << "utilisation de la fonction 2" << std::endl;
	return;
}
