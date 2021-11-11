#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", 25,5,target)
{
	

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &p)
{
    this->target = p.target;
}	

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &p)
{
    this->target = p.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

const char* PresidentialPardonForm::notSigned::what() const throw()
{
	return ("Form not signed");
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	PresidentialPardonForm::notSigned err2;
	Form::GradeTooHighException high;
	Form::GradeTooLowException low;
	
	(void) executor;
    if (this->getSign() == true)
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    else
		throw (err2);
	if (this->getGradeExecute() > 150 || this->getGradeSign() > 150)
		throw (low);
	else if (this->getGradeExecute() < 1 || this->getGradeSign() < 1)
		throw (high);
}

Form *PresidentialPardonForm::ptrFun(std::string formName)
{
	return (new PresidentialPardonForm(formName));
}