#ifndef  EASYFIND_HPP
# define EASYFIND_HPP

#include<iostream>
#include<exception>
#include<algorithm>


class NotFoundExeption : public std::exception
{
	public :
		virtual const char* what() const throw()
		{
			return ("param 2 not found");
		}
};


template<typename T>
typename T::iterator easyfind(T & container, int i)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), i);
	if(it == container.end())
		throw NotFoundExeption();
	return(it);
}



#endif
