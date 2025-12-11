#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include<iostream>

template<typename T_array, typename T_function>
void iter(T_array *array, const int lenght, T_function fct)
{
	int i = 0;

	while(i < lenght)
	{
		fct(array[i]);
		i++;
	}
}

#endif
