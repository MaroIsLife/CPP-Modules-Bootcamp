#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>


class Data
{
public:
	int a;
	Data* deserialize(uintptr_t raw);
	uintptr_t serialize(Data* ptr);

};
#endif