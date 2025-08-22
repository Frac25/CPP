#include"ClapTrap.hpp"

// Orthodox Canonical Form
	ClapTrap::ClapTrap() :
		_name("unknow"),
		_health_point(10),
		_energy_point(10),
		_attack_damage(10)
	{
		std::cout << _name << " created" << std::endl;
	}

	ClapTrap::ClapTrap(const ClapTrap& copy) :
		_name(copy._name),
		_health_point(copy._health_point),
		_energy_point(copy._energy_point),
		_attack_damage(copy._attack_damage)
	{
		std::cout << _name << " copied" << std::endl;
	}

	ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
	{
		std::cout << copy._name << " assigned to " << _name << std::endl;

		_name = copy._name;
		_health_point = copy._health_point;
		_energy_point = copy._energy_point;
		_attack_damage = copy._attack_damage;

		return(*this);
	}

	ClapTrap::~ClapTrap()
	{
		std::cout << _name << " destroyed" << std::endl;
	}

	//Other constructor

	ClapTrap::ClapTrap(const std::string name) :
		_name(name),
		_health_point(10),
		_energy_point(10),
		_attack_damage(10)
	{
		std::cout << _name << " created" << std::endl;
	}

	//Public member fonctions

	void ClapTrap::attack(const std::string& target)
	{
		std::cout << getName() << " attacks " << target
		<< ", causing " << _attack_damage << " points of damage!" << std::endl;
	}

	void ClapTrap::takeDamage(unsigned int amount)
	{
		_health_point -= amount;
	}

	void ClapTrap::beRepaired(unsigned int amount)
	{
		_health_point += amount;
	}

	//Getteur and setteur

	std::string& ClapTrap::getName(void)
	{
		return(_name);
	}

	void ClapTrap::setName(std::string name)
	{
		std::cout << _name << " renamed : " << name << std::endl;
		_name = name;
	}

	int& ClapTrap::getHealthPoint(void)
		{
		return(_health_point);
	}

	void ClapTrap::setHealthPoint(int amount)
	{
		std::cout << _name << "'s HP = " << amount << std::endl;
		_health_point = amount;
	}

	int& ClapTrap::getEnergyPoint(void)
	{
		return(_energy_point);
	}

	void ClapTrap::setEnergyPoint(int amount)
	{
		std::cout << _name << "'s EP = " << _energy_point << std::endl;
		_energy_point = amount;
	}

	int& ClapTrap::getAttackDamage(void)
	{
		return(_attack_damage);
	}

	void ClapTrap::setAttackDamage(int amount)
	{
		std::cout << _name << "'s Damage = " << _attack_damage << std::endl;
		_attack_damage = amount;
	}
