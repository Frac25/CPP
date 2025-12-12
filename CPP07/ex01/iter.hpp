#ifndef ITER_HPP
# define ITER_HPP

#include<iostream>
#include<cstdlib>
#include<ctime>

template<typename T_array, typename T_function>
void iter(T_array *array,size_t length, T_function fct)
{
	size_t i = 0;

	while(i < length)
	{
		fct(array[i]);
		i++;
	}
}

#endif
