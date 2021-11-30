#include <iostream>
#include "iter.hpp"


class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

template<typename T> 
void	iter(T *a, long long b, void (*c)(T const & x))
{
	for(long long i = 0; i < b; i++)
	{
		c(a[i]);
	}
}

void test(std::string const &a)
{
	std::cout << a << std::endl;
}

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print);
	iter( tab2, 5, print);
	std::string str[] = {"Maro", "test"};
	iter(str, 2, test);
	return 0;
}

//The first parameter in iter should be a pointer and not a reference
// because the compiler always dereferences and the address will never sent in the paramater if we have a array

//https://stackoverflow.com/questions/17771406/initial-value-of-reference-to-non-const-must-be-an-lvalue
