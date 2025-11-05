#include "vect2.hpp"

vect2::vect2()
{
	v[0] = 0;
	v[1] = 0;
}

vect2::~vect2()
{}

vect2::vect2(int v0, int v1)
{
	v[0] = v0;
	v[1] = v1;
}

vect2::vect2(const vect2& copy)
{
	v[0] = copy.v[0];
	v[1] = copy.v[1];
}

vect2& vect2::operator=(const vect2&copy)
{
	v[0] = copy.v[0];
	v[1] = copy.v[1];

	return(*this);
}

int vect2::operator[](int i)
{
	return(v[i]);
}



vect2& vect2::operator++() //++v4
{
	v[0]++;
	v[1]++;
	return(*this);
}

vect2 vect2::operator++(int) //v4++
{
	vect2 tmp(*this);
	v[0]++;
	v[1]++;
	return(tmp);
}

vect2& vect2::operator--() //--v4
{
	v[0]--;
	v[1]--;
	return(*this);
}

vect2 vect2::operator--(int) //v4--
{
	vect2 tmp(*this);
	v[0]--;
	v[1]--;
	return(tmp);
}

vect2& vect2::operator+=(const vect2&copy)
{
	v[0] = v[0] + copy.v[0];
	v[1] = v[1] + copy.v[1];

	return(*this);
}

vect2& vect2::operator-=(const vect2&copy)
{
	v[0] = v[0] - copy.v[0];
	v[1] = v[1] - copy.v[1];

	return(*this);
}

vect2& vect2::operator*=(const vect2& copy)
{
	v[0]*=copy.v[0];
	v[1]*=copy.v[1];
	return(*this);
}

vect2& vect2::operator*=(int i)
{
	v[0]*=i;
	v[1]*=i;
	return(*this);
}

vect2 vect2::operator+(const vect2& copy) const
{
	vect2 tmp;
	tmp.v[0] = v[0] + copy.v[0];
	tmp.v[1] = v[1] + copy.v[1];
	return(tmp);
}

vect2 vect2::operator-(const vect2& copy) const
{
	vect2 tmp;
	tmp.v[0] = v[0] - copy.v[0];
	tmp.v[1] = v[1] - copy.v[1];
	return(tmp);
}

vect2 vect2::operator*(const vect2& copy) const
{
	vect2 tmp;
	tmp.v[0] = v[0] * copy.v[0];
	tmp.v[1] = v[1] * copy.v[1];
	return(tmp);
}

vect2 vect2::operator*(int i) const
{
	vect2 tmp;
	tmp.v[0] = v[0] * i;
	tmp.v[1] = v[1] * i;
	return(tmp);
}

vect2 operator*(int i, const vect2& copy)
{
	return(copy * i);
}

int vect2::operator[](int i) const
{
	return(v[i]);
}

bool vect2::operator==(const vect2& copy) const
{
	return (v[0] == copy.v[0] && v[1] == copy.v[1]);
}

bool vect2::operator!=(const vect2& copy) const
{
	return (v[0] != copy.v[0] || v[1] != copy.v[1]);
}

std::ostream& operator<<(std::ostream& o, const vect2& vect)
{
	o << "{" << vect.v[0] << ", " << vect.v[1] << "}";
	return(o);
}