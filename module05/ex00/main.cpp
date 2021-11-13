#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat abc("Maro", 1);
		std::cout << abc << std::endl;
		abc.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}


//Throw in function signature
//For example, the function declaration: void MyFunction(int i) throw(); tells the compiler that the function does not throw any exceptions.

//Exception class
//http://www.cplusplus.com/reference/exception/exception/

//Excetion tutorial
//https://www.cplusplus.com/doc/tutorial/exceptions/

//https://www.geeksforgeeks.org/exception-handling-c/

//https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm

//What function prototype in std::exception class
//virtual const char* what() const throw();

//Overriding What() in std::exception class
//https://stackoverflow.com/questions/66313527/c-overriding-exceptionwhat