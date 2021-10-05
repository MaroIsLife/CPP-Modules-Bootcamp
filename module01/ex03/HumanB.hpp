#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>

class HumanB
{
private:
	std::string weapon;
	std::string name;
public:
	HumanB(std::string name);
	void attack();
};


#endif