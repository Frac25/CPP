#include"Convert.hpp"


Convert::Convert()
{
}

Convert::~Convert()
{

}

Convert::Convert(const Convert& copy)
{
	(void)copy;
}

Convert& Convert::operator=(const Convert& copy)
{
	(void)copy;
	return(*this);
}

void Convert::convert(const std::string& l)
{
	e_type type;
	type = find_type(l);

	std::cout << "type = " << type << std::endl;

	/*
	std::cout << "int min = " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "float min = " << std::numeric_limits<float>::min() << std::endl;
	std::cout << "double min = " << std::numeric_limits<double>::min() << std::endl;
	std::cout << "long min = " << std::numeric_limits<long>::min() << std::endl;
	std::cout << "unsigned char min = " << static_cast<int>(std::numeric_limits<unsigned char>::min()) << std::endl<< std::endl;

	std::cout << "int max = " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "float max = " << std::numeric_limits<float>::max() << std::endl;
	std::cout << "double max = " << std::numeric_limits<double>::max() << std::endl;
	std::cout << "long max = " << std::numeric_limits<long>::max() << std::endl;
	std::cout << "unsigned char max = " << static_cast<int>(std::numeric_limits<unsigned char>::max()) << std::endl<< std::endl;
	*/

	try
	{

		switch (type)
		{
		case SPE:
			convSpe(l);
			break;
		case CHAR:
			convChar(l);
			break;
		case INT:
			convInt(l);
			break;
		case FLOAT:
			convFloat(l);
			break;
		case DOUBLE:
			convDouble(l);
			break;
		case ERROR:
			std::cout << "Invalid input" << std::endl;
			break;
		default:
			std::cout << "Invalid input impossible" << std::endl;
			break;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

