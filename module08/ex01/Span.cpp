#include "Span.hpp"

Span::Span()
{

}

Span::~Span()
{
	
}

Span::Span(Span &p)
{
	(void)p;

}

Span& Span::operator=(Span &p)
{
	(void)p;
	return (*this);
}

Span::Span(unsigned int n)
{
	this->_abc.resize(n);
	this->_offset = 0;
	this->_smallest = 0;
	this->_biggest = 0;
}

void Span::addNumber(unsigned int n)
{
	if (this->_offset >= _abc.size())
		throw std::exception();
	this->_abc[this->_offset] = n;
	this->_offset++;
}

unsigned int Span::shortestSpan()
{
	if (_offset < 3)
		throw std::exception();
	std::sort(_abc.begin(), _abc.end());
	return (_abc[1] - _abc[0]);
}

unsigned int Span::longestSpan()
{
	if (_offset < 3)
		throw std::exception();
	std::sort(_abc.begin(), _abc.end());
	return (_abc[_abc.size() - 1] - _abc[0]);
}