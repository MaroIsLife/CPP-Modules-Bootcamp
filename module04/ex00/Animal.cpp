#include "Animal.hpp"


Animal::Animal()
{

}


Animal::~Animal()
{

}

void Animal::makeSound()
{
	if (this->type == "Dog")
		std::cout << "Woof Woof!" << std::endl;
	else if (this->type == "Cat")
		std::cout << "Meow Meow!" << std::endl;
}

std::string Animal::getType()
{
	return(this->type);
}