#include"BigInt.hpp"

BigInt::BigInt()
{
	sign = 1;
	value = "0";
}

BigInt::BigInt(const std::string &nb)
{
	int i = 0;
	int j = 0;

	std::string nb2 = nb;

	if(nb2[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(nb2[i])
	{
		value[j] = nb2[i];
		i++;
		j++;
	}

	value = "456";


}

BigInt::~BigInt()
{

}


BigInt BigInt::operator+(const BigInt &a) const
{
	BigInt b;

	b.value = "789";
	b.sign = 1;

	return(b);

}

bool BigInt::operator<(const BigInt &a) const
{

	return(1);

}


std::ostream& operator<<(std::ostream &str, const BigInt &b)
{
	str << b.sign << " "<< b.value;
	return(str);
}
