#include"bigint.hpp"

bigint::bigint()
{

}
bigint::~bigint()
{

}
bigint::bigint(const bigint & copy) : _value(copy._value)
{

}
bigint & bigint::operator=(const bigint & copy)
{
//		if(this != copy)
		_value = copy._value;

	return(*this);
}

bigint::bigint(unsigned int value)
{
	if(value == 0)
		_value.push_back(0);

	int i = 0;
	while(value > 0)
	{
		_value.push_back(value %10) ;
		value = value / 10;
		i++;
	}
}

std::string bigint::getValue() const
{
	return(_value);
}

bigint bigint::operator+(const bigint & big) const
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

bigint & bigint::operator+=(const bigint & big)
{
	*this = big + *this;
	return(*this);
}

bigint bigint::operator++(int)
{
	bigint tmp(*this);
	bigint one(1);
	*this = *this + one;
	return(tmp);
}

bigint & bigint::operator++()
{
	bigint one(1);
	*this = *this + one;
	return(*this);
}

bool bigint::operator<(const bigint & big) const
{
	if(big._value.size() > _value.size())
		return(0);
	if(big._value.size() < _value.size())
		return(1);
	for(int i = 0; i < big._value.size(); i++)
	{
		if(_value[i] < big._value[i])
			return(1);
	}
	return(0);
}

bigint bigint::operator<<(int i)
{
	while(i)
	{
		_value.erase();
		i--;
	}
	return(*this);
}

std::ostream & operator<<(std::ostream & o, const bigint & big)
{
	std::string str = big.getValue();
	unsigned int size = str.size();

	if (size == 0)
		return(o);

	while(size > 0)
	{
		o << (char)((int)str[size - 1] + 48);
		size--;
	}


	return(o);
}
