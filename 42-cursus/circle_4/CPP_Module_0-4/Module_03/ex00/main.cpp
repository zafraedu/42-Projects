#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap JackSparrow("JackSparrow");
	ClapTrap DavyJones("DavyJones");
	std::cout << std::endl;

	JackSparrow.setAttack(5);
	JackSparrow.attack("DavyJones");
	DavyJones.takeDamage(5);
	std::cout << std::endl;

	JackSparrow.setAttack(2);
	JackSparrow.attack("DavyJones");
	DavyJones.takeDamage(2);
	std::cout << std::endl;

	DavyJones.beRepaired(7);
	std::cout << std::endl;

	JackSparrow.setAttack(10);
	JackSparrow.attack("DavyJones");
	DavyJones.takeDamage(10);
	std::cout << std::endl;

	return 0;
}
