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
	vect2& operator=(const vect2& copy);
	int operator[](int i);

	vect2& operator++(); //++v4
	vect2 operator++(int);//v4++ le int ne veux rien dire, c est une convention qui permet de préciser qu on est dans le cas post-fixé
	vect2& operator--();
	vect2 operator--(int);

	vect2& operator+=(const vect2& copy);
	vect2& operator-=(const vect2& copy);
	vect2& operator*=(const vect2& copy);
	vect2& operator*=(int i);

	vect2 operator+(const vect2& copy) const;
	vect2 operator-(const vect2& copy) const;
	vect2 operator*(const vect2& copy) const;

	vect2 operator*(int i) const;

};

vect2 operator*(int i, const vect2& copy);

std::ostream& operator<<(std::ostream& o, const vect2& copy);


#endif
