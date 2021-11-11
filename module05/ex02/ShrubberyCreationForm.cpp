#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shruberry",145,137,target)
{
	


}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &p)
{
	this->target = p.target;
}	

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &p)
{
	this->target = p.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

const char* ShrubberyCreationForm::fileError::what() const throw()
{
	return ("File error");
}

const char* ShrubberyCreationForm::notSigned::what() const throw()
{
	return ("Form not signed");
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{

	ShrubberyCreationForm::fileError err;
	ShrubberyCreationForm::notSigned err2;
	Form::GradeTooHighException high;
	Form::GradeTooLowException low;

	(void) executor;
	if (this->getSign() == true)
	{
		std::ofstream ofs("<" + this->target + ">" + "_shrubbery");
		if (ofs == 0)
			throw (err);
		tree_one(ofs);
		tree_two(ofs);
		tree_three(ofs);
		tree_four(ofs);
	}
	else
		throw (err2);
	if (this->getGradeExecute() > 150 || this->getGradeSign() > 150)
		throw (low);
	else if (this->getGradeExecute() < 1 || this->getGradeSign() < 1)
		throw (high);
}

void    ShrubberyCreationForm::tree_one(std::ofstream&    outfile) const
{       
	outfile << "       /\\      \n";
	outfile << "      /\\*\\     \n";
	outfile << "     /\\O\\*\\    \n";
	outfile << "    /*/\\/\\/\\   \n";
	outfile << "   /\\O\\/\\*\\/\\  \n";
	outfile << "  /\\*\\/\\*\\/\\/\\ \n";
	outfile << " /\\O\\/\\/*/\\/O/\\\n";
	outfile << "       ||      \n";
	outfile << "       ||      \n";
	outfile << "       ||      \n";
}

void    ShrubberyCreationForm::tree_two(std::ofstream&    outfile) const
{
	outfile << "         v" << std::endl;
	outfile << "        >X<" << std::endl;
	outfile << "         A" << std::endl;
	outfile << "        d$b" << std::endl;
	outfile << "      .d\\$$b." << std::endl;
	outfile << "    .d$i$$\\$$b." << std::endl;
	outfile << "       d$$@b" << std::endl;
	outfile << "      d\\$$$ib" << std::endl;
	outfile << "    .d$$$\\$$$b" << std::endl;
	outfile << "  .d$$@$$$$\\$$ib." << std::endl;
	outfile << "      d$$i$$b" << std::endl;
	outfile << "     d\\$$$$@$b" << std::endl;
	outfile << "  .d$@$$\\$$$$$@b." << std::endl;
	outfile << ".d$$$$i$$$\\$$$$$$b." << std::endl;
	outfile << "        ###" << std::endl;
	outfile << "        ###" << std::endl;
	outfile << "        ###" << std::endl;
}

void   ShrubberyCreationForm::tree_three(std::ofstream&    outfile) const
{
	outfile << "             /\\" << std::endl;
	outfile << "            <  >" << std::endl;
	outfile << "             \\/" << std::endl;
	outfile << "             /\\" << std::endl;
	outfile << "            /  \\" << std::endl;
	outfile << "           /++++\\" << std::endl;
	outfile << "          /  ()  \\" << std::endl;
	outfile << "          /      \\" << std::endl;
	outfile << "         /~`~`~`~`\\" << std::endl;
	outfile << "        /  ()  ()  \\" << std::endl;
	outfile << "        /          \\" << std::endl;
	outfile << "       /*&*&*&*&*&*&\\" << std::endl;
	outfile << "      /  ()  ()  ()  \\" << std::endl;
	outfile << "      /              \\" << std::endl;
	outfile << "     /++++++++++++++++\\" << std::endl;
	outfile << "    /  ()  ()  ()  ()  \\" << std::endl;
	outfile << "    /                  \\" << std::endl;
	outfile << "   /~`~`~`~`~`~`~`~`~`~`\\" << std::endl;
	outfile << "  /  ()  ()  ()  ()  ()  \\" << std::endl;
	outfile << "  /*&*&*&*&*&*&*&*&*&*&*&\\" << std::endl;
	outfile << " /                        \\" << std::endl;
	outfile << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\" << std::endl;
	outfile << "           |   |" << std::endl;
	outfile << "          |`````|" << std::endl;
	outfile << "          \\_____/" << std::endl;
}

void    ShrubberyCreationForm::tree_four(std::ofstream&    outfile) const
{
	outfile << "          .     .  .      +     .      .          ." << std::endl;
	outfile << "    .       .      .     #       .           ." << std::endl;
	outfile << "       .      .         ###            .      .      ." << std::endl;
	outfile << "     .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
	outfile << "         .      . \"####\"###\"####\"  ." << std::endl;
	outfile << "      .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
	outfile << " .             \"#########\"#########\"        .        ." << std::endl;
	outfile << "       .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
	outfile << "    .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
	outfile << "               .\"##\"#####\"#####\"##\"           .      ." << std::endl;
	outfile << "   .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
	outfile << "     .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
	outfile << "   .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
	outfile << "           .     \"      000      \"    .     ." << std::endl;
	outfile << "      .         .   .   000     .        .       ." << std::endl;
	outfile << ". .. ..................O000O........................ ...... ..." << std::endl;
}
