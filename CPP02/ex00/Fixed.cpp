#include"Fixed.hpp"

	const int Fixed ::_frac = 8;

	Fixed::Fixed()
	{
		std::cout << "Default constructor called" << std::endl;
		_value = 0;
	}

	Fixed::Fixed(const Fixed &p1) : _value(p1._value)
	{
		std::cout << "Copy constructor called" << std::endl;
	}

	Fixed& Fixed::operator=(const Fixed &p1)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		_value = p1.getRawBits();
		return(*this);
	}

	Fixed::~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
	}

	int Fixed::getRawBits(void) const
	{
		std::cout << "getRawBits member fonction called" << std::endl;
		return(_value);
	}

	void Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member fonction called" << std::endl;
		_value = raw;
	}
