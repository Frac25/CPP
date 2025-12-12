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
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

double dec_part(double d)
{
	double int_part;
	if(d >= 0.0)
		int_part = std::floor(d);
	else
	{
		int_part = std::ceil(d);
	}
	std::cout << "fabs = " << std::fabs(int_part) << " dec = " << std::fabs(d) - std::fabs(int_part) <<std::endl;
	return(std::fabs(d) - std::fabs(int_part));
}