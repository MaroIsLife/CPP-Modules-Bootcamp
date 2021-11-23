#include "data.hpp"
#include <iostream>

int main()
{
	Data abc;
	abc.a = 1;
	std::cout << abc.deserialize(abc.serialize(&abc)) << std::endl;
	std::cout << &abc << std::endl;
	std::cout << abc.a << std::endl;

	return (0);
}



//What is uintptr_t? (2nd answer)
//https://stackoverflow.com/questions/1845482/what-is-uintptr-t-data-type