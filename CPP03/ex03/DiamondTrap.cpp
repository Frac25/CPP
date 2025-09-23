#include"DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
	_name = "unknow_d";
	_health_point = FragTrap::_health_point;
	_energy_point = ScavTrap::_energy_point;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << _name << " created()_d" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_health_point = FragTrap::_health_point;
	_energy_point = ScavTrap::_energy_point;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << _name << " created(name)_d" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << " destroyed()_d" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	_name = copy._name;
	ClapTrap::_name = copy._name + "_clap_name";
	_health_point = copy._health_point;
	_energy_point = copy._energy_point;
	_attack_damage = copy._attack_damage;
	std::cout << "DiamondTrap copy called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	///DiamondTrap::_name = copy._name;
	_name = copy._name;
	ClapTrap::_name = copy._name + "_clap_name";
	_health_point = copy._health_point;
	_energy_point = copy._energy_point;
	_attack_damage = copy._attack_damage;
	std::cout << "DiamondTrap operator = called" << std::endl;
	return(*this);
}

void DiamondTrap::attack(const std::string& target)
{
//	if (check_hp(*this) || check_ep(*this))
//		return;

//	std::cout << getName() << " attacks " << target
//	<< ", causing -" << _attack_damage << " hp!_d" << std::endl;
//	_energy_point--;
	ScavTrap::attack(target);
}

void DiamondTrap::stats(void)
{
	std::cout << _name << " : HP/" << _health_point
	<< " EP/" << _energy_point << " dam/" << _attack_damage << " guard/" << _guard << " _d" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name = " << _name << " and ClapTrap name = " << ClapTrap::_name << std::endl;
}
