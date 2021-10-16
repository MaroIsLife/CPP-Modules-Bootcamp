#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int             	_value;
	static const int	_nFraction = 8;

public:
	Fixed();
	Fixed(int n);
	Fixed(float n);
	~Fixed();
	Fixed(Fixed const &p);
	Fixed	&operator=(Fixed const &ref);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getValue(void) const;
};
std::ostream &operator<<(std::ostream &out, Fixed const &ref);

// operator<< must be global and cannot be a member function
//https://www.geeksforgeeks.org/overloading-stream-insertion-operators-c/

#endif