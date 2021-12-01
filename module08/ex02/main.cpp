#include "MutantStack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::cout << "----------------------------------" << std::endl;
		MutantStack<int> mstack;
		MutantStack<int>::iterator it;

		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		mstack.push(6);
		for(it = mstack.begin(); it != mstack.end(); it++)
		{
			std::cout << *it << std::endl;
		}
	}
}

//Why Templates should be implemented in the header file
//https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file

//Stack (Check Member Objects of Stack and Second template Parameter)
//https://www.cplusplus.com/reference/stack/stack/
//https://en.cppreference.com/w/cpp/container/stack

//Deque
//https://www.cplusplus.com/reference/deque/deque/
//https://en.cppreference.com/w/cpp/container/deque

//Undefined Reference to templated class function
//https://bytefreaks.net/programming-2/c/c-undefined-reference-to-templated-class-function