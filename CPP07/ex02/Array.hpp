#ifndef  ARRAY_HPP
# define ARRAY_HPP


#include<iostream>

template<typename T>
class Array
{
	public :
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &copy);
		Array& operator=(const Array &copy);

		const T& operator[](unsigned int i) const; //gerer les hors limite
		T& operator[](unsigned int i); //gerer les hors limite

		unsigned int size() const;

	private :
		T* 				_arr;
		unsigned int	_size;
};

#include"Array.tpp"


#endif
