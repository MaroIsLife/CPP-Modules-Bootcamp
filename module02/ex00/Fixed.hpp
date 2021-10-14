#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int              _nFixed;
	static const int _nFraction = 8;

public:
	Fixed();
	Fixed(int n);
	~Fixed();
	Fixed(Fixed &p);
	Fixed	&operator=(Fixed &ref);
	int		getRawBits(void);
	void	setRawBits(int const raw);
	int		power(int x, unsigned int y)
	{
		if (y == 0)
			return 1;
		else if (y % 2 == 0)
			return power(x, y / 2) * power(x, y / 2);
		else
			return x * power(x, y / 2) * power(x, y / 2);
	}
};

#endif