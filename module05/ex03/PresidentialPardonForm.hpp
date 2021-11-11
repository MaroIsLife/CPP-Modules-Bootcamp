#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &p);
	PresidentialPardonForm &operator=(PresidentialPardonForm &p);
	~PresidentialPardonForm();
	void execute(Bureaucrat const &executor) const;
	static Form *ptrFun(std::string formName);
	class notSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif
