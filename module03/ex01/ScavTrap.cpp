#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "<ScavTrap> " << this->_name << " is alive!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (this->_hitpoints <= 0)
		std::cout << "<ScavTrap> " << this->_name << " died!" << std::endl;
	else
		std::cout << "<ScavTrap> " << this->_name << " is still alive!" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "<ScavTrap> " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "<ScavTrap> " << this->_name << " have enterred in Gate keeper mode." << std::endl;
}