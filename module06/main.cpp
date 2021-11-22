#include <iostream>
#include <iostream>
#include <string>
#include <sstream>

bool is_number(std::string str)
{
	if (str == "+inf" || str == "-inf")
		return true;
	for (int i = 0; i < (int)str.length(); i++)
	if (isdigit(str[i]) == false && str[i] != '.' && str[i] != '-')
	  return false;
	return true;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			std::cout << "Char: ";
			int a;
			std::stringstream stream;
			stream << av[1];
			stream >> a;
			if (is_number(av[1]) == false)
				throw std::exception();
			if (isprint(a) == true)
				std::cout << "\'" << static_cast<char>(a) << "\'" << std::endl;
			else
				std::cout << "Non displayable" << std::endl;

		}
		catch (std::exception &e)
		{
			std::cout << "impossible" << std::endl;
		}
		try
		{
			std::cout << "Int: ";
			int a;
			std::stringstream stream;
			stream << av[1];
			stream >> a;
			if (is_number(av[1]) == false)
				throw std::exception();
			std::cout << a << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "impossible" << std::endl;
		}
		try
		{
			std::cout << "Float: ";
			float a;
			std::stringstream stream;
			stream << av[1];
			stream >> a;
			if (is_number(av[1]) == false)
				throw std::exception();
			else
			{
				std::cout.precision(1);
				std::cout <<  std::fixed << static_cast<float>(a) << "f" << std::endl;
			}
		}
		catch(std::exception &e)
		{
			std::cout << "nanf" << std::endl;
		}
		try
		{
			std::cout << "Double: ";
			double a;
			std::stringstream stream;
			stream << av[1];
			stream >> a;
			if (is_number(av[1]) == false)
				throw std::exception();
			else
			{
				std::cout.precision(1);
				std::cout << std::fixed << static_cast<double>(a) << std::endl;
			}
		}
		catch(std::exception &e)
		{
			std::cout << "nan" << std::endl;
		}

	}
	else
		std::cout << "Insert 1 argument" << std::endl;

    return 0;
}

//Regular cast vs static cast vs dynamic cast
//https://stackoverflow.com/questions/28002/regular-cast-vs-static-cast-vs-dynamic-cast	

//https://stackoverflow.com/questions/7099957/implicit-vs-explicit-conversion

//https://www.geeksforgeeks.org/type-conversion-in-c/

//https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/

//+inf -inf and nan
//https://wiki.analytica.com/index.php?title=INF,_NAN,_and_NULL_-_Exception_values&title=INF,_NAN,_and_NULL_-_Exception_values

//Convert to Fixed
//https://www.cplusplus.com/reference/ios/fixed/

//For dynamic casting there must be one Virtual function.
//if we do not use the virtual function it generates an error message “Source type is not polymorphic”.