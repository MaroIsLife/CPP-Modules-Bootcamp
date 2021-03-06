#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Called Dog Constructor" << std::endl;
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
	// this->ptr = new Brain();
	std::cout << "Assignation constructor called " << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ptr->ideas[i] = ref.ptr->ideas[i];
	}
	return *this;
}

Dog::Dog(Dog &p)
{
	this->ptr = new Brain();
	std::cout << "Copy constructor called " << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ptr->ideas[i] = p.ptr->ideas[i];
	}
}

void Dog::makeSound() const
{
	std::cout << "Haw Haw hh" << std::endl;
}

void Dog::print_address()
{
	std::cout << this->ptr << std::endl;
}
