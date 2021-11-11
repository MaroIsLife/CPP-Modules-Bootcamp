#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy",25,5,target)
{

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &p)
{
	this->target = p.target;
}	

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &p)
{
	this->target = p.target;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{

}

const char* RobotomyRequestForm::notSigned::what() const throw()
{
	return ("Form not signed");
}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	RobotomyRequestForm::notSigned err2;
	Form::GradeTooHighException high;
	Form::GradeTooLowException low;


	(void) executor;
    if (this->getSign() == true)
	{
    	srand(time(NULL));
   		 if (rand() % 2)
			std::cout << this->target << " has been robotomized succesfully" << std::endl;
		else
			std::cout << this->target << " failed to robotomize" << std::endl;
    }
    else
		throw (err2);
	if (this->getGradeExecute() > 150 || this->getGradeSign() > 150)
		throw (low);
	else if (this->getGradeExecute() < 1 || this->getGradeSign() < 1)
		throw (high);
}
