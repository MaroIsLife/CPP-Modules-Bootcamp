#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T& abc, int a)
{
	typename T::iterator it; //Typename tells the compiler that T is a datatype or type, since the nested object is dependent on T
	
	for (it = abc.begin(); it != abc.end(); it++)
	{
		if (*it == a)
			return (it);
	}
	throw std::exception();
}

int main()
{
	
	std::vector<int> g1(10);
	std::vector<int>::iterator v;
	try
	{
		g1[3] = 3;
		v = easyfind<std::vector<int> >(g1, 3);
		std::cout << *v << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return (0);
}


//STL Algorithms (GREAT TOOLS)
//https://www.cplusplus.com/reference/algorithm/

//Why should we use Typename on nested dependant type name
//Typename tells the compiler that T is a type and not a static member variable
//https://stackoverflow.com/questions/1600936/officially-what-is-typename-for
//https://stackoverflow.com/questions/610245/where-and-why-do-i-have-to-put-the-template-and-typename-keywords

//Depend Name
//A dependent name is a name that depends on the type or the value of a template parameter.

//Sequence Container!
//https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/concept/SequenceContainer.html

//What are Container Classes? (Implementation of a vector container)
//https://www.learncpp.com/cpp-tutorial/container-classes/

//Iterators
//https://www.cplusplus.com/reference/iterator/
//https://www.geeksforgeeks.org/iterators-c-stl/
//https://www.geeksforgeeks.org/introduction-iterators-c/
//https://www.learncpp.com/cpp-tutorial/stl-iterators-overview/

//Allocators (Not used in CPP Module08)
//https://www.geeksforgeeks.org/stdallocator-in-cpp-with-examples/
//https://www.cplusplus.com/reference/memory/allocator/

//Vector
//https://www.geeksforgeeks.org/vector-in-cpp-stl/

//Continous vs Contiguous memory allocation
//https://alldifferences.net/difference-between-contiguous-and-noncontiguous-memory-allocation/