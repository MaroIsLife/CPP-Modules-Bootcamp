#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
	int i = 0;

	Zombie *allocate = new Zombie[N];
	while (i < N)
	{
		allocate[i].name = name;
		i++;
	}
	return (allocate);
}
