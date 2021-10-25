#include<iostream>
  
class Base
{
public:
    virtual void fun() = 0; // a function that we don't need to declare its definition in base class = abstract
};
  
class Derived: public Base
{
public:
    void fun() { std::cout << "fun() called\n"; }
};
  
int main(void)
{
	Base *c = new Derived();

	c->fun();
    return 0;
}


//This is an example of why we should use abstract classes
//an abstract class in C++ is a class that has at least one pure virtual function (i.e., a function that has no definition).
//We cannot instantiate an abtract class if it has a pure virtual function (= 0) , 