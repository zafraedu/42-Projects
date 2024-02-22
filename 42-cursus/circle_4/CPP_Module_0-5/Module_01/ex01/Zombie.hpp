#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
