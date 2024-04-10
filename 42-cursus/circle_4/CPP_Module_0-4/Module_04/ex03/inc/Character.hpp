#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[4];

public:
	Character();
	Character(std::string name);
	Character(const Character &cpy);
	virtual ~Character();

	Character &operator=(const Character &obj);

	const std::string &getName(void) const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
