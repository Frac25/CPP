#include"bigint.hpp"


bigint::bigint() : _value("0")
{

}

bigint::bigint(unsigned int n) : _value(std::to_string(n))
{

}

bigint::~bigint()
{

}

bigint::bigint(const bigint &copy) : _value(copy._value)
{

}

std::string bigint::getValue() const
{
	return(_value);
}

bigint bigint::operator+(const bigint & n) const
{
	unsigned long a = to_int(_value);
	unsigned long b = to_int(n.getValue());
	unsigned long c = a + b;
	bigint d(to_string(c));

	return(d);
}

std::ostream & operator<<(std::ostream &str, const bigint &copy)
{
	str << copy.getValue();

	return(str);
}
