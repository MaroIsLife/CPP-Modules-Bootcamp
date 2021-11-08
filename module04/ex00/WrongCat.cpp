#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Wrong Cat";
}


WrongCat::~WrongCat()
{
	std::cout << "Destructor Cat called (NO VIRTUAL HH)" << std::endl;

}

WrongCat &WrongCat::operator=(WrongCat &ref)
{
	this->type = ref.type;
	return *this;
}

WrongCat::WrongCat(WrongCat &p)
{
	this->type = p.type;
}

void WrongCat::makeSound() const
{
	std::cout << "*Wrong cat noises*" << std::endl;
}