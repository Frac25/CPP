#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
	public :
		Fixed();
		Fixed(const int p);
		Fixed(const float p);
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed& operator=(const Fixed &copy);

		Fixed operator+(const Fixed &op) const;
		Fixed operator-(const Fixed &op) const;
		Fixed operator*(const Fixed &op) const;
		Fixed operator/(const Fixed &op) const;

		bool operator>(const Fixed &op) const;
		bool operator<(const Fixed &op) const;
		bool operator>=(const Fixed &op) const;
		bool operator<=(const Fixed &op) const;
		bool operator==(const Fixed &op) const;
		bool operator!=(const Fixed &op) const;

		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int value);
		Fixed operator--(int value);

		static Fixed& min(Fixed &f1, Fixed &f2);
		static const Fixed& min(const Fixed &f1, const Fixed &f2);
		static Fixed& max(Fixed &f1, Fixed &f2);
		static const Fixed& max(const Fixed &f1, const Fixed &f2);


		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;


	private :
		int					_value;
		static const int	_frac;
};

	std::ostream& operator<<(std::ostream& str, const Fixed &fixed_nbr);

#endif
