#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>

class Fixed
{
	public :
		Fixed();
		Fixed(const Fixed &p1);
		Fixed &operator=(const Fixed &p1);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);



	private :
		int _value;
		static const int _frac;
};


#endif
