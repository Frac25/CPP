#ifndef CONVERT_HPP
# define CONVERT_HPP

#include<iostream>
#include<string>
#include<algorithm>
#include<limits>
#include<cstdlib>
#include<cctype>
#include<cerrno>
#include<iomanip>
#include<sstream>
#include<cmath>

enum e_type
{
	SPE = 0,
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
	ERROR = -1
};

class Convert
{
	private :
		Convert();
		~Convert();
		Convert(const Convert& copy);
		Convert& operator=(const Convert& copy);

	public :
	static void convert(const std::string& l);

};

e_type	find_type(const std::string& l);

void convSpe(const std::string& l);
void convChar(const std::string& l);
void convInt(const std::string& l);
void convFloat(const std::string& l);
void convDouble(const std::string& l);

double dec_part(double d);
double int_part(double d);

#endif
