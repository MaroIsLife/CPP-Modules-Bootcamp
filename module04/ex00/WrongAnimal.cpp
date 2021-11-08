#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Wrong Animal";
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor Animal called (NO VIRTUAL HH)" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Wrong Animal noises*" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &ref)
{
	this->type = ref.type;
	return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal &p)
{
	this->type = p.type;
}

std::string WrongAnimal::getType()
{
	return(this->type);
}