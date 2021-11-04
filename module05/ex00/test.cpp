#include <string>
#include <iostream>
#include <exception>

class Enclosing {      
	private:   
		 int x;
	public:
		Enclosing()
		{
			x = 1;
		}
	  
public: 
//    class Nested {
//       int y;   
// 	public:
// 	Nested() {
// 		y = 13;
// 	}
//       void NestedFun() {
//         std::cout << "Jhaahah " <<  y << x << std::endl;  
						 
//       }       
//    }; 
};


class Maro : public std::exception
{
	const char *what() const throw()
	{
		return "Test houss";
	}
};

int returning(int b) {

	Maro abc;
	if (b == 0) 
		throw abc;
	return (b); 
}

int main () {
 	int z;
	try 
	{
		z = returning(0);
		std::cout << z << std::endl;
	} 
	catch (const char* msg) 
	{
	  std::cout << msg << std::endl;
	}
	catch (int msg) 
	{
	  std::cout << "NUmber: " << msg << std::endl;
	}
	catch (std::exception &abc)
	{
		std::cout << abc.what() << std::endl;
	}
	return 0;
}

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