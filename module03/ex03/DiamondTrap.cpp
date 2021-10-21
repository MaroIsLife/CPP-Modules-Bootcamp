#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap(std::string name) : ClapTrap("Maro")
{
	this->name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_attack_damage = FragTrap::_attack_damage;
	DiamondTrap::_energy = ScavTrap::_energy;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Clap's name: " << this->_name << "\nDiamond's name: " << this->name << std::endl;
}

DiamondTrap::DiamondTrap()
{

}

DiamondTrap::~DiamondTrap()
{

}