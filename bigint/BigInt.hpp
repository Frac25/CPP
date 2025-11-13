#ifndef BIGINT_HPP
# define BIGINT_HPP

#include<iostream>

class bigint
{
	public :
	bigint();
	bigint(unsigned int value);
	~bigint();
	bigint(const bigint& copy);
	bigint& operator=(const bigint& copy);

	std::string getValue() const;

	bigint operator+(const bigint& big) const;
	bigint& operator+=(const bigint& big);

	bigint& operator++();
	bigint operator++(int);

	bigint operator<<(int i);
	bigint& operator<<=(int i);
	bigint operator>>(int i);
	bigint& operator>>=(int i);

	bigint& operator>>=(const bigint &big);

	bool operator<(const bigint& big) const;
	bool operator<=(const bigint& big) const;
	bool operator>(const bigint& big) const;
	bool operator>=(const bigint& big) const;
	bool operator==(const bigint& big) const;
	bool operator!=(const bigint& big) const;

	private :
	std::string _value;

};

std::ostream& operator<<(std::ostream& o, const bigint& big);


#endif
