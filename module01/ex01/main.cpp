#include "Zombie.hpp"
#define NUMBER 6

int main()
{
	Zombie maro;
	Zombie *ptr;
	int i;


	i = 0;
	ptr = maro.zombieHorde(NUMBER,"Maro");
	while (i < NUMBER)
	{
		ptr[i].announce();
		i++;
	}
	delete [] ptr;
}