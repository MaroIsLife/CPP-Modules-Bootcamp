#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern &p);
	Intern &operator=(Intern &p);
	~Intern();
	Form *makeForm(std::string formName, std::string formTarget);
	class invalid : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif