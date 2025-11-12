#include"Convert.hpp"

void convSpe(const std::string& l)
{

	if (l == "nan" || l == "nanf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}
	else if (l == "+inf" || l == "+inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
	}
	else if (l == "-inf" || l == "-inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
}

void convChar(const std::string& l)
{
	char c;

	if (l.length() == 1)
		c = l[0];
	else
		c = l[1];

	if(isprint(c))
	{
		std::cout << "char : '" << c << "'" << std::endl;
	}
	else
		std::cout << "char : Non displayable" << std::endl;

	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << ".0f" <<std::endl;
	std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;

}

void convInt(const std::string& l)
{
	long i = std::stol(l);

	if(isprint(i))
		std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char : Not displayable" << std::endl;

	if(i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max())
		std::cout << "int : " << static_cast<int>(i) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if(i >= std::numeric_limits<float>::min() && i <= std::numeric_limits<float>::max())
		std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if(i >= std::numeric_limits<double>::min() && i <= std::numeric_limits<double>::max())
		std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

}

void convFloat(const std::string& l)
{
	float f = std::stof(l);

	if(isprint(f))
		std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "char : Not displayable" << std::endl;

	if(f >= std::numeric_limits<int>::min() && f <= std::numeric_limits<int>::max())
		std::cout << "int : " << static_cast<int>(f) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if(f >= std::numeric_limits<float>::min() && f <= std::numeric_limits<float>::max())
		std::cout << "float : " << static_cast<float>(f) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if(f >= std::numeric_limits<double>::min() && f <= std::numeric_limits<double>::max())
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
}


void convDouble(const std::string& l)
{
	double d = std::stod(l);

	if(isprint(d))
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char : Not displayable" << std::endl;

	if(d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
		std::cout << "int : " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if(d >= std::numeric_limits<float>::min() && d <= std::numeric_limits<float>::max())
		std::cout << "float : " << static_cast<float>(d) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if(d >= std::numeric_limits<double>::min() && d <= std::numeric_limits<double>::max())
		std::cout << "double : " << static_cast<double>(d) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

}
