#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Called Cat Constructor" << std::endl;
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
	this->ptr = ref.ptr;
 	return *this;
}

Cat::Cat(Cat &p)
{
	this->ptr = p.ptr;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}

void Cat::print_address()
{
	std::cout << this->ptr << std::endl;
}