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

	while (i < 4)
	{
		if(level == levels[i])
			(this->*complain[i])();
			
		i++;
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