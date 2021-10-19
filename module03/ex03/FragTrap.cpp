#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "<FragTrap> " << this->_name << " is alive!" << std::endl;
}

FragTrap::~FragTrap()
{
	if (this->_hitpoints <= 0)
		std::cout << "<FragTrap> " << this->_name << " died!" << std::endl;
	else
		std::cout << "<FragTrap> " << this->_name << " is still alive!" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "<FragTrap> " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "<FragTrap> " << this->_name << " threw a positive high five!" << std::endl;
}