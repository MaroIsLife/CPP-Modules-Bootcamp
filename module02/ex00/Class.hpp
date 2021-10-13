#ifndef CLASS_HPP
#define CLASS_HPP
#include <iostream>

class Sample
{
public:
    Sample();
    Sample(int const n);
    Sample(Sample const &src);
    ~Sample();

    Sample &operator=(Sample const &rhs);
    int getFoo();
private:
    int _foo;
    std::ostream& operator<<(std::ostream &o);

};

#endif