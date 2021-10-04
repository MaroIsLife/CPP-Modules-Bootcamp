#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *allocated = new Zombie(name);
	return (allocated);
}
