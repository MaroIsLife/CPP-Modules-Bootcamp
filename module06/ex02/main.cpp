#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#define TYPE A


Base *generate(void)
{
	TYPE *abc = new TYPE();

	return (dynamic_cast<Base*>(abc));
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception &e)
			{

			}
		}
	}	
}


int main()
{
	
	Base *abc = generate();
	Base &abd = *abc;
	identify(abc);
	identify(abd);
	

	return(0);
}

//When should you use .tpp extension file
//https://stackoverflow.com/questions/44774036/why-use-a-tpp-file-when-implementing-templated-functions-and-classes-defined-i

//Dynamic cast return with pointer vs reference
//https://en.cppreference.com/w/cpp/language/dynamic_cast

//the operand of a runtime dynamic_cast must have a polymorphic class type
//https://stackoverflow.com/questions/23089511/dynamic-down-cast-to-abstract-class-c