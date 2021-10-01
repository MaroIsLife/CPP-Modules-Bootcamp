#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact()
{
	this->instance = 0;
	this->c = 0;
}

std::string Contact::get_var(std::string foo, int id)
{
	if (foo == "first_name")
		return (this->first_name[id]);
	else if (foo == "instance")
		return (std::to_string(id));
	else if (foo == "last_name")
		return (this->last_name[id]);
	else if (foo == "nickname")
		return (this->nickname[id]);
	else if (foo == "phone_number")
		return (this->phone_number[id]);
	else if (foo == "darkest_secret")
		return (this->darkest_secret[id]);
	return (0);
}

void Contact::set_var(std::string foo, std::string set, int id)
{

	if (foo == "first_name")
		this->first_name[id] = set;
	else if (foo == "last_name")
		this->last_name[id] = set;
	else if (foo == "nickname")
		this->nickname[id] = set;
	else if (foo == "phone_number")
		this->phone_number[id] = set;
	else if (foo == "darkest_secret")
		this->darkest_secret[id] = set;
}

int main()
{
	std::string cmd;
	Contact abc;
	Phonebook ph;

	while(1)
	{
		cmd = ph.read();
		if (cmd == "EXIT")
			exit(0);
		else if (cmd == "ADD")
			ph.add(&abc);
		else if (cmd == "SEARCH")
			ph.search(&abc);
		else
			std::cout << "Please insert a valid command\n";
	}
	return (0);
}