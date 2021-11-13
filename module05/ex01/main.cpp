#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat Maro("Corrector",21);
		Form abc("Maro",21,13);
		
		std::cout << abc << std::endl;
		abc.beSigned(Maro);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

//Create two classes that use each other as data (Forward Declaration)
//https://stackoverflow.com/questions/4964482/how-to-create-two-classes-in-c-which-use-each-other-as-data

//Weird shit (Initialize by class order) or use -Wno-reoder flag
//https://stackoverflow.com/questions/1564937/gcc-warning-will-be-initialized-after
