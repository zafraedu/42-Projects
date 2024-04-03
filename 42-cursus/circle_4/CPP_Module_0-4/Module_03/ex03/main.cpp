#include "inc/DiamondTrap.hpp"

int main(void)
{
	DiamondTrap JackSparrow("JackSparrow");
	DiamondTrap DavyJones("DavyJones");
	std::cout << std::endl;

	JackSparrow.whoAmI();
	DavyJones.whoAmI();

	// JackSparrow.setAttack(10);
	// JackSparrow.attack("DavyJones");
	// DavyJones.takeDamage(10);
	// std::cout << std::endl;

	return 0;
}
