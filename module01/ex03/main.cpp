#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

int main()
{
	
	{
		Weapon club("Crude Spiked Club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Some other type of club");
		bob.attack();
	}
	{
		Weapon club("Crude Spiked Club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Some other type of club");
		jim.attack();
	}
	return (0);
}