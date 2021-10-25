#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->ptr = new Brain();
}

std::string Cat::getBrain(int i)
{
	return(this->ptr->ideas[i]);
}
void Cat::setBrain(std::string str, int i)
{
	this->ptr->ideas[i] = str;
}

Cat::~Cat()
{
	delete ptr;
	std::cout << "Called Cat Destructor" << std::endl;
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