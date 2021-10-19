#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap lol("Maro");

	lol.takeDamage(100);
	lol.attack("corrector");
	lol.guardGate();
}