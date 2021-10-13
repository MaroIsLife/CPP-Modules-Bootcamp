#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int              _nFixed;
	static const int _nFraction;

public:
	Fixed();
	Fixed(int n);
	~Fixed();
	Fixed(Fixed &p);
	Fixed &operator=(Fixed &ref);
	int getRawBits(void);
	void setRawBits(int const raw);
};

#endif