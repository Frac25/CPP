#include"Weapon.hpp"

	Weapon::Weapon()
	{
		_type = "gun";
		return;
	}

	Weapon::Weapon(std::string type)
	{
		_type = type;
		return;
	}

	Weapon::~Weapon(void)
	{
		return;
	}

	std::string& Weapon::getType(void)
	{
		return(_type);
	}

	void Weapon::setType(std::string type)
	{
		_type = type;
		return; 
	}