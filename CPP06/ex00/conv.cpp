#include"Convert.hpp"

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
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		std::cout << "float : " << static_cast<float>(c) << std::endl;
		std::cout << "double : " << static_cast<double>(c) << std::endl;
	}
	else
		std::cout << "char : Non displayable" << std::endl;


}

void convInt(const std::string& l)
{
	try
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
			std::cout << "float : " << static_cast<float>(i) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;

		if(i >= std::numeric_limits<double>::min() && i <= std::numeric_limits<double>::max())
			std::cout << "double : " << static_cast<double>(i) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void convFloat(const std::string& l)
{
	try
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
			std::cout << "float : " << static_cast<float>(i) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;

		if(i >= std::numeric_limits<double>::min() && i <= std::numeric_limits<double>::max())
			std::cout << "double : " << static_cast<double>(i) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


void convDouble(const std::string& l)
{
	char c;

	if (l.length() == 1)
		c = l[0];
	else
		c = l[1];

	std::cout << "char : ";
	if(isprint(c))
	{
		std::cout << "'" << c << "'" << std::endl;
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		std::cout << "float : " << static_cast<float>(c) << std::endl;
		std::cout << "double : " << static_cast<double>(c) << std::endl;
	}
	else
		std::cout << "Non displayable" << std::endl;


}
