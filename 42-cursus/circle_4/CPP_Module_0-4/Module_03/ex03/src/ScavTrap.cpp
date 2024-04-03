#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "< ScavTrap > - " << this->_name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "< ScavTrap > - " << this->_name << " destructed." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "< ScavTrap > - " << this->_name << " is out of energy." << std::endl;
		return;
	}
	std::cout << "< ScavTrap > - " << this->_name << " attacks " << target << " at range, causing " << this->_attackDamage << " points of damage !" << std::endl;
	this->_energyPoints -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "< ScavTrap > - " << this->_name << " is now in Gate keeper mode." << std::endl;
}
