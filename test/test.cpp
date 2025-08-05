#include <stdio.h>
#include <iostream>
#include"Testo1.class.hpp"
#include"Testo2.class.hpp"

int gl_var = 1;
int f(void) {return 2;}

namespace toto
{
int gl_var = 2;
int f(void) {return 3;}
}

int main(void)
{
//	char buf[512];

	printf("gl_var = %d \n", gl_var);
	printf("f = %d \n", f());
	printf("toto::gl_var = %d \n", toto::gl_var);
	printf("toto::f = %d \n\n", toto::f());

	std::cout << "Salut mon gars" << std::endl;
//	std::cout << "entre un texte : ";
//	std::cin >> buf;
//	std::cout << "tu as tape : " << buf << std::endl;

	Testo1 o1('a', 25, 2.5f);
	Testo1 o2('b', 26, 2.6f);

//	o1.var1 = 42;
//	std::cout << "o_1.var_1 = " << o_1.var_1 << std::endl;


	return(0);
}

