#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (!this->_weapon && this->_weapon->getType().empty())
	{
		std::cout << this->_name
							<< " doesn't have a weapon to attack."
							<< this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->_name
							<< " attacks with their "
							<< this->_weapon->getType() << std::endl;
	}
}
