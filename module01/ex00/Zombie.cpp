#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " Died" << "\n";
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> " <<  "BraiiiiiiinnnzzzZ..." << "\n";
}
