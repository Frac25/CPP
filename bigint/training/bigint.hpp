#ifndef  BIGINT_HPP
# define BIGINT_HPP

#include<iostream>

class bigint
{
	private :
	std::string _value;

	public :
	bigint();
	~bigint();
	bigint(const bigint & copy);
	bigint & operator=(const bigint & copy);

	bigint(unsigned int value);
	std::string getValue() const;

	bigint operator+(const bigint & big) const;
	bigint & operator+=(const bigint & big);

	bigint & operator++();
	bigint operator++(int);

	bool operator<(const bigint & big) const;

	bigint operator<<(int i);

};

	std::ostream & operator<<(std::ostream & o, const bigint & big);

#endif
