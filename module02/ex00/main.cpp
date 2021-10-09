#include <iostream>


#include <iostream>
using namespace std;
class Fraction
{
    int num, den;
public:
    Fraction(int n) { num = n; }
  
    // conversion operator: return float value of fraction
    Fraction operator+ (Fraction &obj)
	{
		Fraction res(1);

		res.num = num + obj.num;
		return (res);
	}
	 void print() { cout << num << endl; }
};
  
int main() 
{
	Fraction c1(10);
	Fraction c2(5);
	Fraction c3 = c1 + c2;
	c3.print();
    return 0;
}