#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <algorithm> 
#include <sstream>

class Span
{
private:
	std::vector<unsigned int> 	_abc;
	unsigned int 				_biggest;
	unsigned int 				_smallest;
	unsigned int 				_offset;
public:
	Span(unsigned int n);
	Span();
	~Span();
	Span(Span &p);
	Span& operator=(Span &p);
	void addNumber(unsigned int n);
	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif