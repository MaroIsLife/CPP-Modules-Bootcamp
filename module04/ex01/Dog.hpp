#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *ptr;
public:
	Dog();
	~Dog();
	Dog(Dog &p);
	Dog	&operator=(Dog &ref);
	void makeSound() const;
	std::string getBrain(int i);
	void setBrain(std::string str, int i);
};

#endif