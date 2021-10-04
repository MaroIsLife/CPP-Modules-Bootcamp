#include "Zombie.hpp"

int main()
{
	Zombie maro("Maro");
	Zombie *test;

	test = maro.newZombie("Abdelaziz");
	maro.randomChump("Houssam");
	delete test;
	return (0);
}
