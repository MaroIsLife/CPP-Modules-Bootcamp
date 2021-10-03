#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>

class Phonebook
{
public:
	std::string read();
	void add(Contact *abc);
	void print_search(std::string str, Contact *abc, int i);
	void search(Contact *abc);
};
#endif