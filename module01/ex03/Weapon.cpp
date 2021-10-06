#include "Weapon.hpp"

std::string const	&Weapon::getType()
{
	std::string const &ref = this->type;

	return (ref);
}

void				Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}
