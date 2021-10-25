#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->ptr = new Brain();
}

Dog::~Dog()
{
	delete ptr;
	std::cout << "Called Dog Destructor" << std::endl;
}

std::string Dog::getBrain(int i)
{
	return(this->ptr->ideas[i]);
}
void Dog::setBrain(std::string str, int i)
{
	this->ptr->ideas[i] = str;
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