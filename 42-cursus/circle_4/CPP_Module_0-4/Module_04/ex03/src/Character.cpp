#include "../inc/Character.hpp"

Character::Character(void) : _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &cpy) : _name(cpy._name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = cpy._inventory[i];
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = obj._inventory[i];
		this->_name = obj._name;
	}
	return *this;
}

const std::string &Character::getName(void) const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx])
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}
