#include <iostream>


#include <iostream>
class Fraction
{
    int num;
public:
    Fraction(int n) { num = n; }
  
    Fraction operator+ (Fraction &obj)
	{
		Fraction res(0);
		
		std::cout << "This Num " << this->num << " res.num " << res.num << " obj.num " << obj.num << std::endl;
		res.num = this->num * obj.num;
		return (1000);
	}

	void  operator<< (int a)
	{
		num = a + 1;
		std::cout << this->num << std::endl;
	}
	 void print() { std::cout << num << std::endl; }
};
  
int main() 
{
	Fraction c1(10);
	Fraction c2(5);
	Fraction c3 = c1 + c2;
	c3.print();
    return 0;
}