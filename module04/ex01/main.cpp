#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void fill_object(Animal *test)
{
	for (int i = 0; i < 50; i++)
	{
		test->setBrain("Cat", i);
	}

	for (int i = 50; i < 100; i++)
	{
		test->setBrain("Dog", i);
	}
	// for(int i = 0; i < 100; i++)
	// {
	// 	std::cout << test->getBrain(i) << std::endl;
	// }
}

int main()
{
	Dog *abc = new Dog();
	fill_object(abc);
	Animal *lol = new Dog(*abc);
	lol->print_address();
	abc->print_address();
	
	// Animal *test_cat = new Cat();

	// fill_object(test_cat);

	
	// delete test_dog;
	// delete test_cat;


	return (0);
}


//Should Derived Class also be virtual? (Check Answer #2)
//https://stackoverflow.com/questions/7403883/derived-class-with-non-virtual-destructor
// If Base class destructor is virtual then the Derived class destructor is implicitly virtual already, you don't need to specify it as virtual explicitly.

//Virtual Destructor for an abstract class (= 0)
//https://stackoverflow.com/questions/270917/why-should-i-declare-a-virtual-destructor-for-an-abstract-class-in-c/270925

//Virtual Base class Destructors
//https://stackoverflow.com/questions/461203/when-to-use-virtual-destructors

//Virtual destructors are useful when you might potentially delete an instance of a derived class through a pointer to base class

//an abstract class in C++ is a class that has at least one pure virtual function (i.e., a function that has no definition).

//We cannot instantiate an abtract class if it has a pure virtual function (= 0) , 

//Deep Copy vs Shallow Copy
//https://stackoverflow.com/questions/2657810/deep-copy-vs-shallow-copy