#include"Fixed.hpp"

	const int Fixed::_frac = 8;

	Fixed::Fixed()
	{
		_value = 0;
	}

	Fixed::Fixed(const int p) : _value(p<<_frac)
	{


	}

	Fixed::Fixed(const float p) : _value(static_cast<int>(roundf(p * (1 << _frac))))
	{

	}


	Fixed::Fixed(const Fixed &copy) : _value(copy._value)
	{

	}

	Fixed::~Fixed()
	{

	}

	Fixed& Fixed::operator=(const Fixed &copy)
	{
		std::cout << "Copy assignment operator = called" << std::endl;
		_value = copy.getRawBits();
		return(*this);
	}

	Fixed Fixed::operator+(const Fixed &op) const
	{
		return(toFloat() + op.toFloat());
	}

	Fixed Fixed::operator-(const Fixed &op) const
	{
		return(toFloat() - op.toFloat());
	}

	Fixed Fixed::operator*(const Fixed &op) const
	{
		return(toFloat() * op.toFloat());
	}

	Fixed Fixed::operator/(const Fixed &op) const
	{
		return(toFloat() / op.toFloat());
	}

	bool Fixed::operator>(const Fixed &op) const
	{
		return(toFloat() > op.toFloat());
	}

	bool Fixed::operator<(const Fixed &op) const
	{
		return(toFloat() < op.toFloat());
	}

	bool Fixed::operator>=(const Fixed &op) const
	{
		return(toFloat() >= op.toFloat());
	}

	bool Fixed::operator<=(const Fixed &op) const
	{
		return(toFloat() <= op.toFloat());
	}

	bool Fixed::operator==(const Fixed &op) const
	{
		return(toFloat() == op.toFloat());
	}

	bool Fixed::operator!=(const Fixed &op) const
	{
		return(toFloat() != op.toFloat());
	}

	Fixed& Fixed::operator++(void) //++a
	{
		_value++;
		return(*this);
	}

	Fixed& Fixed::operator--(void) //--a
	{
		_value--;
		return(*this);
	}

	Fixed Fixed::operator++(int) //a++
	{
		Fixed tmp = *this;
		_value++;
		return(tmp);
	}

	Fixed Fixed::operator--(int) //a--
	{
		Fixed tmp = *this;
		_value--;
		return(tmp);
	}

	Fixed& Fixed::min(Fixed &f1, Fixed &f2)
	{
		if (f1 < f2)
			return(f1);
		return(f2);
	}

	const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
	{
		if (f1 < f2)
			return(f1);
		return(f2);
	}

	Fixed& Fixed::max(Fixed &f1, Fixed &f2)
	{
		if (f1 > f2)
			return(f1);
		return(f2);

	}

	const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
	{
		if (f1 > f2)
			return(f1);
		return(f2);
	}

	int Fixed::getRawBits(void) const
	{
		return(_value);
	}

	void Fixed::setRawBits(int const raw)
	{
		_value = raw;
	}

	float Fixed::toFloat(void) const
	{
		return(static_cast<float>(_value) / (1 << _frac));
	}

	int Fixed::toInt(void) const
	{
		return(_value >> _frac);
	}

	std::ostream &operator<<(std::ostream &os, const Fixed &fixed_nbr)
	{
		os << fixed_nbr.toFloat();
		return (os);
	}

