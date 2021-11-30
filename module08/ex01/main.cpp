#include "Span.hpp"

bool is_number(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	if (isdigit(str[i]) == false)
	  throw std::exception();
	return true;
}

int main(int ac, char **av)
{
	try
	{
		Span sp(ac - 1);
		unsigned int table[ac - 1];
		for(int i = 1; av[i] != NULL; i++)
		{
			is_number(av[i]);
			std::stringstream stream;
			stream << av[i];
			stream >> table[i];
			sp.addNumber(table[i]);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error" << std::endl;
	}

	return (0);
}