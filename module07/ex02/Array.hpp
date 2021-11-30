template<typename T> 
class Array
{
private:
	T *array;
public:
	unsigned int size_n;
	Array();
	Array(unsigned int n);
	~Array();
	Array(Array &p);
	T &getArray(unsigned int i);
	unsigned int size();
	T& operator[](unsigned int a);

};