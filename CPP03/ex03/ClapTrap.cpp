#include"ClapTrap.hpp"

//fonction annexes

int check_hp(ClapTrap &t)
{
	if(t.getHealthPoint()<= 0)
	{
		std::cout << t.getName() << " is dead._c" << std::endl;
		return (1);
	}
	return(0);
}

int check_ep(ClapTrap &t)
{
	if(t.getEnergyPoint()<= 0)
	{
		std::cout << t.getName() << "'ep = " << t.getEnergyPoint() << "_c" << std::endl;
		return (1);
	}
	return(0);
}

// Orthodox Canonical Form
	ClapTrap::ClapTrap() :
		_name("unknow_c"),
		_health_point(10),
		_energy_point(10),
		_attack_damage(10)
	{
		std::cout << _name << " created()_c" << std::endl;
	}

	ClapTrap::ClapTrap(const ClapTrap& copy) :
		_health_point(copy._health_point),
		_energy_point(copy._energy_point),
		_attack_damage(copy._attack_damage)
	{
		std::string name_tmp = copy._name + "'copy_c";
		_name = name_tmp;
				std::cout << _name << " copied_c" << std::endl;
	}

	ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
	{
		std::cout << copy._name << " assigned to " << _name << "_c" << std::endl;

		_health_point = copy._health_point;
		_energy_point = copy._energy_point;
		_attack_damage = copy._attack_damage;

		return(*this);
	}

	ClapTrap::~ClapTrap()
	{
		std::cout << _name << " destroyed_c" << std::endl;
	}

	//Other constructor

	ClapTrap::ClapTrap(const std::string name) :
		_name(name),
		_health_point(10),
		_energy_point(10),
		_attack_damage(10)
	{
		std::cout << _name << " created(name)_c" << std::endl;
	}

	//Public member fonctions

	void ClapTrap::attack(const std::string& target)
	{
		if (check_hp(*this) || check_ep(*this))
			return;

		std::cout << getName() << " attacks " << target
		<< ", causing -" << _attack_damage << " hp!_c" << std::endl;
		_energy_point--;
	}

	void ClapTrap::takeDamage(unsigned int amount)
	{
		if (check_hp(*this) || check_ep(*this))
			return;
		std::cout << getName() << " lose " << amount << " hp!_c" << std::endl;
		_health_point -= amount;
	}

	void ClapTrap::beRepaired(unsigned int amount)
	{
		if (check_hp(*this))
			return;
		std::cout << getName() << " win " << amount << " ep!" << "_c" << std::endl;
		_energy_point--;
		_health_point += amount;
	}


	void ClapTrap::stats(void)
	{
		std::cout << this->ClapTrap::getName() << " : HP/" << _health_point
		<< " EP/" << _energy_point << " dam/" << _attack_damage << "_c" << std::endl;
	}


	//Getteur and setteur

	std::string& ClapTrap::getName(void)
	{
		return(_name);
	}

	void ClapTrap::setName(std::string name)
	{
		std::cout << _name << " renamed : " << name << "_c" << std::endl;
		_name = name;
	}

	int& ClapTrap::getHealthPoint(void)
		{
		return(_health_point);
	}

	void ClapTrap::setHealthPoint(int amount)
	{
		std::cout << _name << "'s HP = " << amount << "_c" << std::endl;
		_health_point = amount;
	}

	int& ClapTrap::getEnergyPoint(void)
	{
		return(_energy_point);
	}

	void ClapTrap::setEnergyPoint(int amount)
	{
		_energy_point = amount;
		std::cout << _name << "'s EP = " << _energy_point << "_c" << std::endl;
	}

	int& ClapTrap::getAttackDamage(void)
	{
		return(_attack_damage);
	}

	void ClapTrap::setAttackDamage(int amount)
	{
		std::cout << _name << "'s Damage = " << "_c" << _attack_damage << std::endl;
		_attack_damage = amount;
	}

