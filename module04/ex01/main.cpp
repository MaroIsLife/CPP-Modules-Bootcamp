#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *test = new Dog();

	for(int i = 0; i < 50; i++)
	{
		test->setBrain("Cat", i);
	}

	for(int i = 0; i < 50; i++)
	{
		test->setBrain("Dat", i);
	}

	delete test;


	return (0);
}

//an abstract class in C++ is a class that has at least one pure virtual function (i.e., a function that has no definition).
//We cannot instantiate an abtract class if it has a pure virtual function (= 0) , 