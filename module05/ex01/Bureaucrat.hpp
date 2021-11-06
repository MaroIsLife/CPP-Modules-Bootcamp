#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;	
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(Bureaucrat &p);
	Bureaucrat(std::string name, int grade);
	Bureaucrat	&operator=(Bureaucrat &ref);
	std::string getName();
	int			getGrade();
	void		incrementGrade();
	void 		decrementGrade();
	void		signForm(Form &p);
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	//Overriding What() from std::exception class
};
std::ostream &operator<<(std::ostream &obj, Bureaucrat &abc);

#endif
