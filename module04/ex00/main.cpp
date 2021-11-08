#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
	{
		Animal* meta = new Animal();
		Animal* j = new Dog();
		Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
	}

	// {
	// 	WrongAnimal *meta = new WrongAnimal();
	// 	WrongAnimal *i = new WrongCat();
	// 	std::cout << meta->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	meta->makeSound();
	// 	i->makeSound();
	// 	delete meta;
	// 	delete i;
	// }
	return (0);
}

//Function overloading and Operator overloading = Compile time Polymorphism
//Function Overriding and Virtual functin = Run Time Polymorphism

//Compile Time vs Run Time
//https://stackoverflow.com/questions/846103/runtime-vs-compile-time

//Runtime Polymorphism vs Compile time Polymorphism
//https://techvidvan.com/tutorials/polymorphism-in-cpp/


//Function Overriding
//https://www.upgrad.com/blog/function-overriding-in-c-plus-plus/

//Why we need Virtual Functions
//https://stackoverflow.com/questions/2391679/why-do-we-need-virtual-functions-in-c

//There are two ways to Override a function either by using Virtual or by using Namespace::function_name

//Without "virtual" you get "early binding" (Compile time)
//Which implementation of the method is used gets decided at compile time based on the type of the pointer that you call through.

//With "virtual" you get "late binding" (Run time)
// Which implementation of the method is used gets decided at run time based on the type of the pointed-to object - what it was originally constructed as. This is not necessarily what you'd think based on the type of the pointer that points to that object.

//Virtual table hh (read this la bghiti yderek rassk)
//https://pabloariasal.github.io/2017/06/10/understanding-virtual-tables/