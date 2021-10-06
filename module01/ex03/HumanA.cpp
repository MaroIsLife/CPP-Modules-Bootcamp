#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string weapon) : weapon(weapon)
{
	this->name = name;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon << "\n";
}