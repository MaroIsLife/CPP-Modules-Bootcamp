#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat Maro("Corrector",10);
		RobotomyRequestForm abc("Form_C");
		// ShrubberyCreationForm abc("Form_A");
		// PresidentialPardonForm abc("Form_B");
		abc.beSigned(Maro);
		std::cout << abc << std::endl;
		Maro.executeForm(abc);
		abc.execute(Maro);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

//This exercice is officially ranked #1 as the worst exercice on CPP Module by Maro.

//Random Function
//https://mathbits.com/MathBits/CompSci/LibraryFunc/rand.htm
