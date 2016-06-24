#include <iostream> 

using namespace std;

void swap(int &a, int &b);

int main()
{
	int a = 1;
	int b = 2;
	
	swap(a, b);
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	return 0;
}

inline void swap(int &a, int &b)
{
	int c;
	
	c = a;
	a = b;
	b = c;
	
	return;
}
