#include"Convert.hpp"

void convSpe(const std::string& str)
{
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
}

void convChar(const std::string& str)
{
	char c;

	if (str.length() == 1)
		c = str[0];
	else
		c = str[1];
	if(isprint(c))
	{
		std::cout << "char : '" << c << "'" << std::endl;
	}
	else
		std::cout << "char : Non displayable" << std::endl;

	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float : " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl;

}

void convInt(const std::string& str)
{
	errno = 0;
	long i = std::strtol(str.c_str(), NULL, 10);
	if(errno == ERANGE)
	{
		std::cout << "strtol overflow" << std::endl;
	}
	else
	{
		if(i >= 0 && i <= 255 && isprint(static_cast<unsigned char>(i)))
			std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char : Not displayable" << std::endl;

		if(i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max())
			std::cout << "int : " << static_cast<int>(i) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;

		if(int_part(i) < 1000000)
			std::cout << std::fixed << std::setprecision(1);

		if(i >= -std::numeric_limits<float>::max()  && i <= std::numeric_limits<float>::max())
			std::cout << "float : " << static_cast<float>(i) << "f" << std::endl;
		else
			std::cout << "float : impossible" << std::endl;

		if(i >= -std::numeric_limits<double>::max() && i <= std::numeric_limits<double>::max())
			std::cout << "double : " << static_cast<double>(i) << std::endl;
		else
			std::cout << "double : impossible" << std::endl;
	}
}

void convFloat(const std::string& str)
{
	errno = 0;
	float f = std::strtof(str.c_str(), NULL);
	if(errno == ERANGE)
	{
		std::cout << "strtod overflow" << std::endl;
	}
	else
	{
		float f2 = f;

		if(f >= 0 && f <= 255 && isprint(static_cast<unsigned char>(f)))//sdu
			std::cout << "char : '" << static_cast<char>(f2) << "'" << std::endl;
		else
			std::cout << "char : Not displayable" << std::endl;
		if(f >= -std::numeric_limits<int>::max() && f <= std::numeric_limits<int>::max())
			std::cout << "int : " << static_cast<int>(f) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;

		if(dec_part(f) == 0 && int_part(f) < 1000000)
			std::cout << std::fixed << std::setprecision(1);

		std::cout << "float : " << f << "f" << std::endl;

		if(f >= -std::numeric_limits<double>::max() && f <= std::numeric_limits<double>::max())
			std::cout << "double : " << static_cast<double>(f) << std::endl;
		else
			std::cout << "double : impossible" << std::endl;
	}
}


void convDouble(const std::string& str)
{
	errno = 0;
	double d = std::strtod(str.c_str(),NULL);
	if(errno == ERANGE)
	{
		std::cout << "strtod overflow" << std::endl;
	}
	else
	{
		if(d >= 0 && d <= 255 && isprint(static_cast<unsigned char>(d)))
			std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "char : Not displayable" << std::endl;

		if(d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
			std::cout << "int : " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;

		if(dec_part(d) == 0 && int_part(d) < 1000000)
			std::cout << std::fixed << std::setprecision(1);

		if(d >= -std::numeric_limits<float>::max() && d <= std::numeric_limits<float>::max())
			std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
		else
			std::cout << "float : impossible" << std::endl;

		std::cout << "double : " << d << std::endl;
	}
}
