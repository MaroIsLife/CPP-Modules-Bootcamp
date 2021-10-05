#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>

class HumanA
{
private:
	std::string weapon;
	std::string name;
public:
	HumanA(std::string name, std::string weapon);
	void attack();
};


#endif