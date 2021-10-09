#include "Karen.hpp"


void Karen::complain(std::string level)
{
	int i;
	
	// https://stackoverflow.com/questions/42824383/a-value-of-type-void-cannot-be-assigned-to-an-entity-of-type-int-last
	
	//https://www.ibm.com/docs/en/i/7.4?topic=only-pointers-members-c

	//Ach had Syntax de 🤢
	this->ptr[0] = &Karen::error;	
	this->ptr[1] = &Karen::warning;
	this->ptr[2] = &Karen::debug;
	this->ptr[3] = &Karen::info;

	std::string test[4] = {
		"ERROR",
		"WARNING",
		"DEBUG",
		"INFO"
	};

	i = 0;
	while (i < 4)
	{
		while (level == test[i])
		{
			(this->*ptr[i]) ();
			break ;
		}
		i++;
	}
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;

}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	
}