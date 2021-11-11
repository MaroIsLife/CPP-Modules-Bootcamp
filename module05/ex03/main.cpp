#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
	
		Bureaucrat Maro("Corrector",20);
		Intern::invalid inv; 
		Intern someRandomIntern;
		Form *rrf;	
		
		rrf = someRandomIntern.makeForm("shrubbery creation","Maro");
		if (rrf == NULL)
		{
			delete rrf;
			throw (inv);
		}
		std::cout << *rrf << std::endl;
		rrf->beSigned(Maro);
		Maro.executeForm(*rrf);
		rrf->execute(Maro);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

