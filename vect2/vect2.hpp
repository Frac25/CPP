#ifndef VECT2_HPP
# define VECT2_HPP

#include<iostream>

class vect2
{
	public :

	int v[2];

	vect2();
	~vect2();
	vect2(int v0, int v1);
	vect2(const vect2& copy);
	vect2& operator=(const vect2&copy);
	int operator[](int i);

};

std::ostream& operator<<(std::ostream& o, const vect2& copy);


#endif
