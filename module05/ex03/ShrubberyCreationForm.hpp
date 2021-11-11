#ifndef SHRUBERRY_HPP
#define SHRUBERRY_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	void    tree_one(std::ofstream& outfile) const;
	void    tree_two(std::ofstream& outfile) const;
	void    tree_three(std::ofstream& outfile) const;
	void    tree_four(std::ofstream& outfile) const;




public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &p);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &p);
	~ShrubberyCreationForm();
	static Form *ptrFun(std::string formName);
	void execute(Bureaucrat const &executor) const;
	class notSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class fileError : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif
