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

	switch (type)
	{
	case ERROR:
		std::cout << "Invalid input" << std::endl;
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
	default:
		std::cout << "Invalid input" << std::endl;
		break;
	}



}

