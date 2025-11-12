#include"Convert.hpp"


int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Enter one literal" << std::endl;
		return(0);
	}

	Convert::convert(argv[1]);

	return(0);
}
