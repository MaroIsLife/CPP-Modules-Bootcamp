#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat &p);
	WrongCat	&operator=(WrongCat &ref);
	void makeSound() const;
};

#endif