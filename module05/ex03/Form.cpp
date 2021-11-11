#include "Bureaucrat.hpp"
#include "Form.hpp"



Form::Form() : _name(""), _grade_sign(150), _grade_execute(150)
{

}

Form::Form(std::string name, int grade_sign, int grade_execute, std::string target) : _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	Form::GradeTooHighException high;
	Form::GradeTooLowException low;

	this->target = target;
	if (grade_sign > 150 || grade_execute > 150)
		throw low;
	else if (grade_sign < 1 || grade_execute < 1)
		throw high;
	this->_sign = false;
}

Form::Form(Form &p) : _name(p._name), _grade_sign(p._grade_sign), _grade_execute(p._grade_execute)
{
	this->_sign = p._sign;
}

Form &Form::operator=(Form &p)
{
	this->_sign = p._sign;

	return (*this);
}

Form::~Form()
{

}

const std::string Form::getName()
{
	return (this->_name);
}

bool Form::getSign() const
{
	return (this->_sign);
}

void Form::beSigned(Bureaucrat &p)
{
	Form::GradeTooLowException low;
	Form::GradeTooHighException high;

	if (p.getGrade() >= (this->_grade_sign))
	{
		p.signForm(*this);
		delete this;
		throw (low);
	}
	else
	{
		this->_sign = true;
		p.signForm(*this);
	}
}

int Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int Form::getGradeExecute() const
{
	return (this->_grade_execute);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &obj,Form &abc)
{
	obj << "Name: ";
	obj << abc.getName();
	obj << "\nSign: ";
	obj << abc.getSign();
	obj << "\nGrade Sign: ";
	obj << abc.getGradeSign();
	obj << "\nGrade Execute: ";
	obj << abc.getGradeExecute();
	return (obj);
}
