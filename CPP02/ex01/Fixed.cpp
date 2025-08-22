#include"Fixed.hpp"

	const int Fixed::_frac = 8;

	Fixed::Fixed()
	{
		std::cout << "Default constructor called" << std::endl;
		_value = 0;
	}

	Fixed::Fixed(const Fixed &copy) : _value(copy._value)
	{
		std::cout << "Copy constructor called" << std::endl;
	}

	Fixed& Fixed::operator=(const Fixed &copy)
	{
		std::cout << "Copy assignment operator = called" << std::endl;
		_value = copy.getRawBits();
		//this->_value = copy._value;
		return(*this);
	}

	Fixed::~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
	}

	Fixed::Fixed(const int p) : _value(p<<_frac)
	{
		std::cout << "Int constructor called" << std::endl;

	}

	Fixed::Fixed(const float p) : _value(static_cast<int>(roundf(p * (1 << _frac))))
	{
		std::cout << "Float constructor called" << std::endl;
	}

	int Fixed::getRawBits(void) const
	{
	//	std::cout << "getRawBits member fonction called" << std::endl;
		return(_value);
	}

	void Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member fonction called" << std::endl;
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

