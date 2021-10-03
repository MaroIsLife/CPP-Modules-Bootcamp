#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{

private:
	std::string first_name[8];
	std::string last_name[8];
	std::string nickname[8];
	std::string phone_number[8];
	std::string darkest_secret[8];

public:
	int			instance;
	int			c;
	std::string	get_var(std::string foo, int id);
	void		set_var(std::string foo, std::string set, int id);
	Contact(void);
};
#endif