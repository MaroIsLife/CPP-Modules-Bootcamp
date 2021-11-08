#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shruberry",145,137,target)
{
	//Put All this in Execute function
	ShrubberyCreationForm::fileError err;
	std::ofstream ofs("<" + target + ">" + "_shrubbery");

	if (ofs == 0)
		throw (err);
	//----------------------------------------


}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &p)
{

}	

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &p)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

const char* ShrubberyCreationForm::fileError::what() const throw()
{
	return ("File error");
}
