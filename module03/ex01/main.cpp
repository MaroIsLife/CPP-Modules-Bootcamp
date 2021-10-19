#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap lol("Maro");

	lol.takeDamage(100);
	lol.attack("corrector");
	lol.guardGate();
}

//https://stackoverflow.com/questions/32018607/c-inheritance-child-class-instance-uses-both-child-and-parent-constructors
//https://www.studytonight.com/cpp/order-of-constructor-call.php