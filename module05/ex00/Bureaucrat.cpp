#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	Bureaucrat::GradeTooHighException high;
	Bureaucrat::GradeTooLowException low;

	if (grade < 1)
		throw high;
	if (grade > 150)
		throw low;
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat &p) : _name(p._name)
{
	this->_grade = p._grade;
}


Bureaucrat	&Bureaucrat::operator=(Bureaucrat &ref)
{
	this->_grade = ref._grade;

	return (*this);
}

std::string Bureaucrat::getName()
{
	return (this->_name);
}

int			Bureaucrat::getGrade()
{
	return (this->_grade);
}


void		Bureaucrat::incrementGrade()
{
	Bureaucrat::GradeTooHighException high;

	this->_grade--;
	if (this->_grade < 1)
	{
		this->_grade++;
		throw high;
	}
}

void 		Bureaucrat::decrementGrade()
{
	Bureaucrat::GradeTooLowException low;

	this->_grade++;
	if (this->_grade > 150)
	{
		this->_grade--;
		throw low;
	}
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &obj, Bureaucrat &abc)
{
	obj << "<";
	obj << abc.getName();
	obj << "> bureaucrat grade <";
	obj << abc.getGrade();
	obj << ">";
	return (obj);
}
