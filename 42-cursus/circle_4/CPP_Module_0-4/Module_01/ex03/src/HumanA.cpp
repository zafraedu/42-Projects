#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack(void) const
{
	if (this->_weapon.getType().empty())
	{
		std::cout << this->_name
							<< " doesn't have a weapon to attack."
							<< this->_weapon.getType() << std::endl;
	}
	else
	{
		std::cout << this->_name
							<< " attacks with their "
							<< this->_weapon.getType() << std::endl;
	}
}
