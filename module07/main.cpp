#include <iostream>
#include "whatever.hpp"

class Awesome
{
public:
	Awesome(void) : _n(0) {}
	Awesome( int n ) : _n( n ) {}
	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
	private:
	int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

template<typename T> void swap(T &a, T &b)
{
	std::swap(a,b);
}

template<typename T> T min(T &a, T &b)
{
	if (b <= a)
		return (b);
	else
		return (a);
}

template<typename T> T max(T &a, T &b)
{
	if (b >= a)
		return (b);
	else
		return (a);
}


int main(void)
{
	Awesome a(2), b(4);
	swap(a, b);

	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;

	{
		std::string a = "I'm \'a\' bro hh";
		std::string b = "I'm \'b\' bro hh";
		swap(a, b);
		std::cout << a << std::endl;
		std::cout << max<std::string>(a,b) << std::endl;
	}
	return (0);
}


//Templates
//https://www.youtube.com/watch?v=I-hZkUa9mIs
//https://www.cplusplus.com/doc/oldtutorial/templates/

//Difference between Typename and Class in Templates
//https://stackoverflow.com/questions/2023977/difference-of-keywords-typename-and-class-in-templates