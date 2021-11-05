#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Form
{
private:
	const std::string	_name;
	bool 				_sign;
	const int 			_grade_sign;
	const int			_grade_execute;
public:
	Form();
	Form(std::string name, bool sign, int grade_sign, int grade_execute);
	Form(Form &p);
	Form &operator=(Form &p);
	~Form();
	const std::string getName();
	bool getSign();
	const int getGradeSign();
	const int getGradeExecute();
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