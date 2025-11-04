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

std::ostream& operator<<(std::ostream& o, const vect2& vect)
{
	o << "{" << vect.v[0] << ", " << vect.v[1] << "}";
	return(o);
}
