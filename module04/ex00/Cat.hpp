#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(Cat &p);
	Cat	&operator=(Cat &ref);
	void makeSound() const;


};

#endif