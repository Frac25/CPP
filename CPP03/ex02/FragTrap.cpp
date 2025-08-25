#include"FragTrap.hpp"

// Orthodox Canonical Form
	FragTrap::FragTrap()
	{
		_health_point = 100;
		_energy_point = 100;
		_attack_damage = 30;

		std::cout << _name << " created()_f" << std::endl;
	}

	FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
	{
		std::cout << _name << " copied_f" << std::endl;
	}

	FragTrap& FragTrap::operator=(const FragTrap& copy)
	{
		ClapTrap::operator=(copy);
		std::cout << copy._name << " assigned_f to " << _name << std::endl;

		return(*this);
	}

	FragTrap::~FragTrap()
	{
		std::cout << _name << " destroyed_f" << std::endl;
	}

	//Other constructor

	FragTrap::FragTrap(const std::string name) : ClapTrap(name)
	{
		_health_point = 100;
		_energy_point = 100;
		_attack_damage = 30;

		std::cout << _name << " created(name)_f" << std::endl;
	}

	//Public member fonctions

	void FragTrap::hightFivesGuys(void)
	{
		std::cout << _name << ": ✋!" << std::endl;
	}
