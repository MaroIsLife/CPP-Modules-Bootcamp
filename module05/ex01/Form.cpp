#include "Form.hpp"

Form::Form(std::string name, bool sign, int grade_sign, int grade_execute) : _name(name), _grade_execute(grade_execute), _grade_sign(grade_sign)
{
	this->_sign = sign;
}

Form::Form(Form &p) : _name(p._name), _grade_execute(p._grade_execute), _grade_sign(p._grade_sign)
{
	this->_sign = p._sign;

}

Form &Form::operator=(Form &p)
{

}

Form::~Form()
{

}

const std::string Form::getName()
{
	return (this->_name);
}

bool Form::getSign()
{
	return (this->_sign);
}

const int Form::getGradeSign()
{
	return (this->_grade_sign);
}

const int Form::getGradeExecute()
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
