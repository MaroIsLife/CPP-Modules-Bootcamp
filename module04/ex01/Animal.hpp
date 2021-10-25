#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal &p);
	Animal	&operator=(Animal &ref);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType();
	virtual std::string getBrain(int i) = 0;
	virtual	void setBrain(std::string str, int i) = 0;

};

#endif