#ifndef BIGINT_HPP
# define BIGINT_HPP

#include<iostream>

class BigInt
{
	public :
		BigInt();
		BigInt(const std::string &nb);
		~BigInt();

		BigInt operator+(const BigInt &a) const;

		bool operator<(const BigInt &a) const;

	
	public :
		int sign;
		std::string value;

};

std::ostream& operator<<(std::ostream &str, const BigInt &b);

#endif