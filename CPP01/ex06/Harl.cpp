#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*debug)() = &Harl::debug;
	void (Harl::*info)() = &Harl::info;
	void (Harl::*warning)() = &Harl::warning;
	void (Harl::*error)() = &Harl::error;

	void(Harl::*complain[4])() = {debug, info, warning, error};

	int i = 0;

	while (i < 4 && level != levels[i])
	{
		i++;
	}

	std::cout << "i = " << i << std::endl;

	switch(i)
	{
		default :
			std::cout << "probably complaining about insignificant problems" << std::endl;
			break;
		case 0 :
			(this->*complain[0])();
		case 1 :
			(this->*complain[1])();
		case 2 :
			(this->*complain[2])();
		case 3 :
			(this->*complain[3])();

	}
}

void Harl::debug(void)
{
	std::cout << "Debug : bug!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Info : it s Harl" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning!!" << std::endl;
}

void Harl::error (void)
{
	std::cout << "Error!!" << std::endl;
}
