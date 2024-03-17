#include "Zombie.hpp"

int main(void)
{
	const int N = 2;
	Zombie *zombie = zombieHorde(N, "zombie");

	for (int i = 0; i < N; i++)
		zombie[i].announce();

	delete[] zombie;
	return 0;
}
