#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
	public :
		Fixed();
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed &copy);
		~Fixed();

		Fixed(const int p);
		Fixed(const float p);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;


	private :
		int					_value;
		static const int	_frac;
};

	std::ostream& operator<<(std::ostream &str, const Fixed &fixed_nbr);

#endif
