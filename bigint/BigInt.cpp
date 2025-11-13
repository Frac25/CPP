#include "bigint.hpp"

bigint::bigint()
{
}

bigint::bigint(unsigned int value)
{
	if (value == 0)
		_value.push_back(0);

	while(value)
	{
		_value.push_back(value % 10);
		value /= 10;
	}
}

bigint::~bigint()
{

}

bigint::bigint(const bigint& copy) : _value(copy._value)
{

}

bigint& bigint::operator=(const bigint& copy)
{
	_value = copy._value;
	return(*this);
}

std::string bigint::getValue() const
{
	return(_value);
}


////////////

bigint bigint::operator+(const bigint& big) const
{
	int ret = 0;
	int som = 0;
	int i = 0;
	bigint res;

	while(!(i >= _value.size() && i >= big._value.size()) || ret != 0)
	{
		if (i >= _value.size())
			som = 0 + big._value[i] + ret;
		else if (i >= big._value.size())
			som = _value[i] + 0 + ret;
		else
			som = _value[i] + big._value[i] + ret;

		ret = 0;
		if(som >= 10)
		{
			ret = 1;
			som = som % 10;
		}
		res._value += som;
		i++;

	}

	return(res);
}

bigint& bigint::operator+=(const bigint& big)
{
	*this = *this + big;
	return(*this);
}

bigint& bigint::operator++()
{
	*this += 1;

	return(*this);
}

bigint bigint::operator++(int)
{
	bigint tmp(*this);

	*this += 1;

	return(tmp);
}

bigint bigint::operator<<(int i)
{
	bigint tmp(*this);

	int j = 0;
	int z = 0;
	if(tmp._value.size() == 1 && tmp._value[0] == 0)
		return(tmp);

	while(j < i)
	{
		tmp._value.insert(tmp._value.begin(), z);
		j++;
	}

	return(tmp);
}

bigint& bigint::operator<<=(int i)
{

	int j = 0;
	int z = 0;
	if(_value.size() == 1 && _value[0] == 0)
		return(*this);

	while(j < i)
	{
		_value.insert(_value.begin(), z);
		j++;
	}

	return(*this);
}

bigint bigint::operator>>(int i)
{
	bigint tmp(*this);

	int j = 0;

	if(tmp._value.size() <= 1 && tmp._value[0] == 0)
		return(tmp);

	while(j < i)
	{
		tmp._value.erase(0,1);
		j++;
	}

	return(tmp);
}

bigint& bigint::operator>>=(int i)
{
	int j = 0;

	if(_value.size() <= 1 && _value[0] == 0)
		return(*this);

	while(j < i)
	{
		_value.erase(0,1);
		j++;
	}
	return(*this);
}

bool bigint::operator==(const bigint& big) const
{
	if(_value == big._value)
		return(1);
	return(0);
}

bool bigint::operator!=(const bigint& big) const
{
	if(_value != big._value)
		return(1);
	return(0);
}

bool bigint::operator<(const bigint& big) const
{
	int i = _value.size() - 1;
//	// std::cout << "_value.size()" << _value.size() << std::endl;
//	std::cout << "big._value.size()" << big._value.size() << std::endl;
	if(_value.size() < big._value.size())
		return(1);
	if(_value.size() > big._value.size())
		return(0);

	while(i >= 0)
	{
		if(_value[i] < big._value[i])
			return(1);
		if(_value[i] > big._value[i])
			return(0);
		i--;
	}

	return(0);
}

bool bigint::operator<=(const bigint& big) const
{
	if ( *this == big || *this < big)
		return(1);
	return(0);
}


bool bigint::operator>(const bigint& big) const
{
	if(*this == big || *this < big)
		return(0);
	return(1);
}

bool bigint::operator>=(const bigint& big) const
{
	if ( *this == big || *this > big)
		return(1);
	return(0);
}


bigint& bigint::operator>>=(const bigint &big)
{
	bigint j(0);

	if(_value.size() <= 1 && _value[0] == 0)
		return(*this);

	while(j < big)
	{
		_value.erase(0,1);
		j++;
	}
	return(*this);
}

/////////////

std::ostream& operator<<(std::ostream& o, const bigint& big)
{
	std::string s = big.getValue();

	int i = s.size() - 1;

	while(i >= 0)
	{
		o << (int)s[i];
		i--;
	}

	return(o);
}
