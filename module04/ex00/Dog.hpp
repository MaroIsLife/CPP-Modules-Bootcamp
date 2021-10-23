#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(Dog &p);
	Dog	&operator=(Dog &ref);
	void makeSound() const;

};

#endif