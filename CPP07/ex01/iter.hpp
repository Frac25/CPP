#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include<iostream>

/*Implement a function template iter that takes 3 parameters and returns nothing.
• The first parameter is the address of an array.
• The second one is the length of the array, passed as a const value.
• The third one is a function that will be called on every element of the array.
Submit a main.cpp file that contains your tests. Provide enough code to generate a
test executable.
Your iter function template must work with any type of array. The third parameter
can be an instantiated function template.
The function passed as the third parameter may take its argument by const reference
or non-const reference, depending on the context.*/

template<typename T_array, typename T_function>
void iter(T_array array, int lenght, T_function fct)
{
	int i = 0;

	while(i < lenght)
	{
		fct(array[i]);
		i++;
	}
}

#endif
