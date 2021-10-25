#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *ptr;
public:
	Cat();
	~Cat();
	Cat(Cat &p);
	Cat	&operator=(Cat &ref);
	void makeSound() const;
	std::string getBrain(int i);
	void setBrain(std::string str, int i);


};

#endif