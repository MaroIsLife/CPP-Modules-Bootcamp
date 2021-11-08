#ifndef SHRUBERRY_HPP
#define SHRUBERRY_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &p);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &p);
	~ShrubberyCreationForm();
	class fileError : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif

