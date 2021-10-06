#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

int main()
{
	Weapon club("Crude Spiked Club");

	HumanA bob("Bob", "Test");
	bob.attack();
	club.setType("Some other type of club");
	bob.attack();
	return (0);
}