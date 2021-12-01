#include "Span.hpp"

Span::Span()
{

}

Span::~Span()
{
	
}

Span::Span(Span &p)
{
	this->_abc = p._abc;
	this->_offset = p._offset;
	this->_biggest = p._biggest;
	this->_smallest = p._smallest;
}

Span& Span::operator=(Span &p)
{
	this->_abc = p._abc;
	this->_offset = p._offset;
	this->_biggest = p._biggest;
	this->_smallest = p._smallest;
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
