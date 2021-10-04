#include "Zombie.hpp"

Zombie::Zombie()
{
	;
}

Zombie::~Zombie(void)
{
	;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> " <<  "BraiiiiiiinnnzzzZ..." << "\n";
}