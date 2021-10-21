#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap abc("Maro");
	abc.attack("corrector");
	abc.whoAmI();


	return (0);
}

//The Diamond problem: 
//https://www.sandordargo.com/blog/2020/12/23/virtual-inheritance
// Calling parent virtual classes using grandfather will trigger their Default Constructor (No parameters)


//-Wshadow Flag
//https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html

//Ambiguous Function Attack (Check Answer #1)
//https://www.py4u.net/discuss/115823