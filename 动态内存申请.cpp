#include <iostream>

using namespace std;

int main()
{
	int i; 
	int *p = new int;
	
	*p = 10;
	
	cout << "*p = " << *p << endl;
	
	delete p;
	
	int *q = new int [10];
	
	for (i = 0; i < 10; i++)
	{
		q[i] = i;
	}
	
	for (i = 0; i < 10; i++)
	{
		cout << "q[" << i << "] = " << q[i] << endl;		
	}
	
	delete[] q;
	
	return 0;
} 
