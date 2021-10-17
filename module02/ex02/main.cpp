#include "Fixed.hpp"

int main()
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	
	std::cout << a << "\n";
	std::cout << ++a << "\n";
	std::cout << b << "\n";


	return (0);
}