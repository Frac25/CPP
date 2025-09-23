#include"ScavTrap.hpp"

// Orthodox Canonical Form
	ScavTrap::ScavTrap()
	{
		_health_point = 100;
		_energy_point = 100;
		_attack_damage = 100;
		_guard = 0;

		std::cout << _name << " created()_s" << std::endl;
	}

	ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
	{
		_guard = copy._guard;

		std::cout << _name << " copied_s" << std::endl;
	}

	ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
	{
		ClapTrap::operator=(copy);
		std::cout << copy._name << " assigned_s to " << _name << std::endl;

		return(*this);
	}

	ScavTrap::~ScavTrap()
	{
		std::cout << _name << " destroyed_s" << std::endl;
	}

	//Other constructor

	ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
	{
		_health_point = 100;
		_energy_point = 100;
		_attack_damage = 100;
		_guard = 0;

		std::cout << _name << " created(name)_s" << std::endl;
	}

	//Public member fonctions

	void ScavTrap::attack(const std::string& target)
	{
		if (check_hp(*this) || check_ep(*this))
			return;

		std::cout << getName() << " attacks_s " << target
		<< ", causing -" << _attack_damage << " hp!_s" << std::endl;
		_energy_point--;
	}

	void ScavTrap::stats(void)
	{
		std::cout << this->ClapTrap::getName() << " : HP/" << _health_point
		<< " EP/" << _energy_point << " dam/" << _attack_damage
		<< " guard/" << _guard << "_s" << std::endl;
	}

	void ScavTrap::guardGate(void)
	{
		if (check_hp(*this) || check_ep(*this))
			return;

		std::cout << getName() << " is in Gate keeper mode." << std::endl;
		_energy_point--;
		_guard = 1;

	}



