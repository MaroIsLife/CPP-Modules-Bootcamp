#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog left hh" << std::endl;
}

Dog &Dog::operator=(Dog &ref)
{
	this->type = ref.type;
	return *this;
}

Dog::Dog(Dog &p)
{
	this->type = p.type;
}

void Dog::makeSound() const
{
	std::cout << "Haw Haw hh" << std::endl;
}