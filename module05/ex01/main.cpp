#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat abc("Maro", 1);
		std::cout << abc << std::endl;
		abc.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
