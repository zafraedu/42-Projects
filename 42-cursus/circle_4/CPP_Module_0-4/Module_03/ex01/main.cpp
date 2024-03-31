#include "inc/ScavTrap.hpp"

int main(void)
{
	ScavTrap JackSparrow("JackSparrow");
	ScavTrap DavyJones("DavyJones");
	std::cout << std::endl;

	JackSparrow.setAttack(7);
	JackSparrow.attack("DavyJones");
	DavyJones.takeDamage(7);
	std::cout << std::endl;

	DavyJones.beRepaired(7);
	std::cout << std::endl;

	JackSparrow.setAttack(10);
	JackSparrow.attack("DavyJones");
	DavyJones.takeDamage(10);
	std::cout << std::endl;

	JackSparrow.guardGate();
	DavyJones.guardGate();
	std::cout << std::endl;

	return 0;
}
