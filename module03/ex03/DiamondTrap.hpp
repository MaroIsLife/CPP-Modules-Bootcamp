#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap(std::string name);
	DiamondTrap();
	~DiamondTrap();
	using ScavTrap::attack;
	void whoAmI();
};

//Ambiguous Function (Check Answer#1)
//https://www.py4u.net/discuss/115823

#endif