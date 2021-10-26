#include "Animal.hpp"


Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Called Animal Constructor" << std::endl;

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
	std::cout << "Called Animal Destructor" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "*Animal noises*" << std::endl;
}

std::string Animal::getType()
{
	return(this->type);
}
