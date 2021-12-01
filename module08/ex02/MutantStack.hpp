#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <vector>
#include <iostream>
#include <algorithm> 
#include <list>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename MutantStack::stack::container_type::iterator iterator;
		MutantStack(){}
		~MutantStack(){}
		MutantStack(MutantStack &p) 
		{
			(void)p;
		}
		MutantStack& operator=(MutantStack &p)
		{
			(void)p;
		}
		typename MutantStack::stack::container_type::iterator begin()
		{
			return (this->c.begin());	
		}
		typename MutantStack::stack::container_type::iterator end()
		{
			return (this->c.end());	
		}
};

#endif
