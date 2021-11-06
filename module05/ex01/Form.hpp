#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool 				_sign;
	const int 			_grade_sign;
	const int			_grade_execute;
public:
	Form();
	Form(std::string name, int grade_sign, int grade_execute);
	Form(Form &p);
	Form &operator=(Form &p);
	~Form();
	const std::string getName();
	bool getSign();
	void beSigned(Bureaucrat &p);
	int getGradeSign();
	int getGradeExecute();
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
};
std::ostream &operator<<(std::ostream &obj, Form &abc);

#endif