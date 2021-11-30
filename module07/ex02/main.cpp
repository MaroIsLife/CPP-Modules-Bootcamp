#include <iostream>
#include "Array.hpp"

template<typename T> 
T& Array<T>::operator[](unsigned int a)
{
	return(this->getArray(a));
}

template<typename T> 
T &Array<T>::getArray(unsigned int i)
{
	if (i >= size())
		throw (std::exception());
	else
		return(array[i]);
}

template<typename T> 
unsigned int Array<T>::size()
{
	return(this->size_n);
}

template<typename T> 
Array<T>::Array()
{
	this->size_n = 0;
	this->array = new T[0];
}

template<typename T> 
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->size_n = n;
}

template<typename T> 
Array<T>::~Array()
{
	delete[] array;
}

template<typename T> 
Array<T>::Array(Array &p)
{
	this->array = new T[p.size_n];
	this->size_n = p.size_n;
	for(unsigned int i = 0; i < p.size_n ; i++)
	{
		this->array[i] = p.array[i];
	}
}

int main()
{
	{
		std::cout << "-----------------------------" << std::endl;
		try
		{
			Array<int> abc(10);
			abc[1] = 12;
			std::cout << abc[1] << std::endl;
			std::cout << "Size: " << abc.size() << std::endl;
			Array<int> maro(abc);	
			std::cout << "Maro:" << maro[1] << std::endl;
			maro[1] = 98;
			std::cout << "Abc: " << abc[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error" << std::endl;
		}
		std::cout << "-----------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------" << std::endl;
		try
		{
			Array<std::string> abc(10);
			abc[1] = "lololol";
			std::cout << abc[1] << std::endl;
			std::cout << "Size: " << abc.size() << std::endl;	
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error" << std::endl;
		}
		std::cout << "-----------------------------" << std::endl;
	}
	return (0);
}

//When can new keyword throw exception and NULLpointer
//https://stackoverflow.com/questions/26419786/why-doesnt-new-in-c-return-null-on-failure
