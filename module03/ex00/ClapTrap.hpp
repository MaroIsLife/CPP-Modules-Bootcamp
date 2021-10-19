#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hitpoints;
	int _energy;
	int _attack_damage;

public:
	ClapTrap(std::string name);
	~ClapTrap(void);
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif