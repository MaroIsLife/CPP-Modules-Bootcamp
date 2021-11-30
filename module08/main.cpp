#include <iostream>
#include <vector>
#include <list>
#include <map>

template<typename T>
T &easyfind(T, int a)
{
	std::vector<T> abc;
	std::vector<T>::iterator it;

	for()

}

int main()
{
	std::vector<int> g1(5);
	std::vector<int>::iterator v;
	std::allocator<int> abc;

	abc.allocate(5);

	// for(int i = 0; i < 5; i++)
	// {
	// 	g1.push_back(i);
	// }
	g1.push_back(10);

	for(v = g1.begin(); v != g1.end(); v++)
	{
		std::cout << *v << std::endl;
	}
	return 0;
}

//Sequence Container!
//https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/concept/SequenceContainer.html

//What are Container Classes? (Implementation of a vector container)
//https://www.learncpp.com/cpp-tutorial/container-classes/

//Iterators
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