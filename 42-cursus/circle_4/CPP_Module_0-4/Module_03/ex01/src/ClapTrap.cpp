#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ ClapTrap ] - " << _name << " has been born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy)
{
	*this = to_copy;
	std::cout << "[ ClapTrap ] - " << this->_name << "has been copied with copy constuctor." << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &original)
{
	if (this != &original)
	{
		this->_name = original._name;
		this->_hitPoints = original._hitPoints;
		this->_energyPoints = original._energyPoints;
		this->_attackDamage = original._attackDamage;
	}
	std::cout << "[ ClapTrap ] - " << this->_name << " has been copied with copy assignment operator." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ ClapTrap ] - " << this->_name << "has been destroyed" << std::endl;
};

void ClapTrap::setAttack(const unsigned int damage)
{
	this->_attackDamage = damage;
}

// metodos

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "[ ClapTrap ] - " << _name << " is out of energy points!" << std::endl;
		return;
	}
	std::cout << "[ ClapTrap ] - " << _name << " attacks " << target << ", causing " << _attackDamage
						<< " points of damage!" << std::endl;
	this->_energyPoints += 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		std::cout << "[ ClapTrap ] - " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << "[ ClapTrap ] - " << _name << " takes " << amount << " damage!" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amout)
{
	if (_energyPoints <= amout)
	{
		std::cout << "[ ClapTrap ] - " << _name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "[ ClapTrap ] - " << _name << " repairs itself for " << amout << " hit points!" << std::endl;
	this->_energyPoints -= 1;
	this->_hitPoints += amout;
}
