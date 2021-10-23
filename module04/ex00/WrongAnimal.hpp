#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>


class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal &p);
	WrongAnimal	&operator=(WrongAnimal &ref);
	void makeSound() const;
	std::string getType();

};

#endif