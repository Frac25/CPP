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
	std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;

}

void convInt(const std::string& str)
{
	long i = std::stol(str);

	if(isprint(i))
		std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char : Not displayable" << std::endl;

	if(i >= std::numeric_limits<int>::lowest() && i <= std::numeric_limits<int>::max())
		std::cout << "int : " << static_cast<int>(i) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if(i >= std::numeric_limits<float>::lowest() && i <= std::numeric_limits<float>::max())
		std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
	else
		std::cout << "float : impossible" << std::endl;

	if(i >= std::numeric_limits<double>::lowest() && i <= std::numeric_limits<double>::max())
		std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
	else
		std::cout << "double : impossible" << std::endl;

}

void convFloat(const std::string& str)
{
	float f = std::stof(str);
	float f2 = f;

	if(f >= std::numeric_limits<int>::lowest() && f <= std::numeric_limits<int>::max() && isprint(static_cast<int>(f)))
		std::cout << "char : '" << static_cast<char>(f2) << "'" << std::endl;
	else
		std::cout << "char : Not displayable" << std::endl;

	if(f >= std::numeric_limits<int>::lowest() && f <= std::numeric_limits<int>::max())
		std::cout << "int : " << static_cast<int>(f) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if (f == 0)
		std::cout << "float : 0.0f" << std::endl;
	else if(f >= std::numeric_limits<float>::lowest() && f <= std::numeric_limits<float>::max())
		std::cout << "float : " << static_cast<float>(f) << "f" << std::endl;
	else
		std::cout << "float : impossible" << std::endl;

	if (f == 0)
		std::cout << "double : 0.0" << std::endl;
	else if(f >= std::numeric_limits<double>::lowest() && f <= std::numeric_limits<double>::max())
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	else
		std::cout << "double : impossible" << std::endl;
}


void convDouble(const std::string& str)
{
	double d = std::stod(str);

//	if(isprint(d))
	if(d >= std::numeric_limits<int>::lowest() && d <= std::numeric_limits<int>::max() && isprint(static_cast<int>(d)))
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char : Not displayable" << std::endl;

	if(d >= std::numeric_limits<int>::lowest() && d <= std::numeric_limits<int>::max())
		std::cout << "int : " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	if (d == 0)
		std::cout << "float : 0.0f" << std::endl;
	else if(d >= std::numeric_limits<float>::lowest() && d <= std::numeric_limits<float>::max())
		std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
	else
		std::cout << "float : impossible" << std::endl;

	if (d == 0)
		std::cout << "double : 0.0" << std::endl;
	else if(d >= std::numeric_limits<double>::lowest() && d <= std::numeric_limits<double>::max())
		std::cout << "double : " << static_cast<double>(d) << std::endl;
	else
		std::cout << "double : impossible" << std::endl;

}
