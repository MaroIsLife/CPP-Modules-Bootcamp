#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &p);
	RobotomyRequestForm &operator=(RobotomyRequestForm &p);
	~RobotomyRequestForm();
	void execute(Bureaucrat const &executor) const;
	static Form *ptrFun(std::string formName);
	class notSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif
