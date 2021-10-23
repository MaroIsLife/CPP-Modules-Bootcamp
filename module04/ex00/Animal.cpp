#include "Animal.hpp"


Animal::Animal()
{
	this->type = "Animal";
}

Animal &Animal::operator=(Animal &ref)
{
	this->type = ref.type;
	return *this;
}

Animal::Animal(Animal &p)
{
	this->type = p.type;
}

Animal::~Animal()
{

}

void Animal::makeSound() const
{
	std::cout << "*Animal noises*" << std::endl;
}

std::string Animal::getType()
{
	return(this->type);
}