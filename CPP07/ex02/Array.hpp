#ifndef  ARRAY_HPP
# define ARRAY_HPP


#include<iostream>
#include<cstdlib>
#include<ctime>

template<typename T>
class Array
{
	public :
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &copy);
		Array& operator=(const Array &copy);

		const T& operator[](unsigned int i) const;
		T& operator[](unsigned int i);

		unsigned int size() const;

		class OutOfBoundsException : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};

	private :
		T* 				_arr;
		unsigned int	_size;
};

#include"Array.tpp"
#endif
