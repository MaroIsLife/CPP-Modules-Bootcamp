#include "Intern.hpp"

Intern::Intern()
{


}

Intern::~Intern()
{

}

Intern::Intern(Intern &p)
{
	(void) (p);
}

Intern &Intern::operator=(Intern &p)
{
	(void) (p);
	return *this;
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
	int i; 

	std::string funs[3] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation",
	};
	Form* (*ptr[3]) (std::string formName);

	ptr[0] = RobotomyRequestForm::ptrFun;	
	ptr[1] = PresidentialPardonForm::ptrFun;
	ptr[2] = ShrubberyCreationForm::ptrFun;
	i = 0;
	while (i < 3)
	{
		while (formName == funs[i])
		{
			return (ptr[i]) (formTarget);
			break ;
		}
		i++;
	}
	return (NULL);
}

const char* Intern::invalid::what() const throw()
{
	return ("Invalid Form");
}

