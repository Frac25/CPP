#ifndef BIGINT_HPP
# define BIGINT_HPP

#include<iostream>

class bigint
{
	public :
	bigint();
	bigint(unsigned int n);
	~bigint();
	bigint(const bigint &copy);
	std::string getValue() const;

	bigint operator+(const bigint & n) const;

	private :
	std::string _value;

};

std::ostream & operator<<(std::ostream &str, const bigint &copy);

#endif
