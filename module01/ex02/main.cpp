#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << &brain << " " << stringPTR << " " << &stringREF;
	std::cout << "\nPointer: " << *stringPTR << "\nReference: " << stringREF;


}
