#include "inc/FragTrap.hpp"

int main(void)
{
	FragTrap JackSparrow("JackSparrow");
	FragTrap DavyJones("DavyJones");
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

	DavyJones.highFive();
	std::cout << std::endl;

	return 0;
}
