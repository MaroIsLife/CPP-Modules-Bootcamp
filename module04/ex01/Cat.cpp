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
	this->ptr = new Brain();
	std::cout << "Assignation constructor called " << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ptr->ideas[i] = ref.ptr->ideas[i];
	}
	return *this;
}

Cat::Cat(Cat &p)
{
	this->ptr = new Brain();
	std::cout << "Copy constructor called " << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ptr->ideas[i] = p.ptr->ideas[i];
	}
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}

void Cat::print_address()
{
	std::cout << this->ptr << std::endl;
}