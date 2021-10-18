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
	bool	operator>(Fixed const &ref);
	bool	operator<(Fixed const &ref);
	bool	operator>=(Fixed const &ref);
	bool	operator<=(Fixed const &ref);
	bool	operator==(Fixed const &ref); ////https://stackoverflow.com/questions/1691007/whats-the-right-way-to-overload-operator-for-a-class-hierarchy
	bool	operator!=(Fixed const &ref);
	Fixed	operator+(Fixed const &ref);
	Fixed	operator-(Fixed const &ref);
	Fixed	operator/(Fixed const &ref);
	Fixed	operator*(Fixed const &ref);
	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);
	Fixed 	&operator=(Fixed const &ref);

	static const Fixed &min(Fixed const &ref1, Fixed const &ref2); //__attribute__((unused)) c++11
	static const Fixed &max(Fixed const &ref1, Fixed const &ref2);
	float toFloat( void ) const;
	int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &out, Fixed const &ref);

#endif