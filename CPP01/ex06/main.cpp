#include"Harl.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "enter 1 arg" << std::endl;
		return(1);
	}

	Harl v2;
	v2.complain(argv[1]);

	return(0);
}