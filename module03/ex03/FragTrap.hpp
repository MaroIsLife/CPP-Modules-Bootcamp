#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	void attack(std::string const &target);
	void highFivesGuys(void);
};
#endif

