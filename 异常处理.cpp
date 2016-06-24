#include <iostream>

using namespace std;

enum index_e {underflow, overflow};
int array_index(int *A, int num, int index);

int main()
{
	int i;
	int *p = new int[10];
	index_e inx;
	
	for (i = 0; i < 10; i++)
		p[i] = i;
		
	try
	{
		cout << array_index(p, 10, 5) << endl;
		cout << array_index(p, 10, -1) << endl;
		cout << array_index(p, 10, 15) << endl;
	}
	
	catch (index_e inx)
	{
		if (inx == underflow)
		{
			cout<<"index underflow!"<<endl;
            exit(-1);
		}
		
		if (inx == overflow)
		{
			cout<<"index overflow!"<<endl;
            exit(-1);
		}
	}
	
	return 0;
}

int array_index(int *A, int num, int index)
{
	if (index < 0)
		throw underflow;
		
	if (index > 10)
		throw overflow;
		
	return A[index];	
}
