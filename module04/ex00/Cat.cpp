#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
}


Cat::~Cat()
{
	std::cout << "Cat left hh" << std::endl;
}

Cat &Cat::operator=(Cat &ref)
{
	this->type = ref.type;
	return *this;
}

Cat::Cat(Cat &p)
{
	this->type = p.type;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}