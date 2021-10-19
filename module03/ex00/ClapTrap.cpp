#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_attack_damage = 0;
	std::cout << this->_name << " Is alive!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (this->_hitpoints <= 0)
		std::cout << this->_name << " died!" << std::endl;
	else
		std::cout << this->_name << " is alive!" << std::endl;

}

void ClapTrap::attack(std::string const &target)
{
	std::cout << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " took " << amount << " damage " << std::endl;
	this->_hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " healed " << amount << " hitpoints " << std::endl;
	this->_hitpoints += amount;
}