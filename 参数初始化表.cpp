#include <iostream>

using namespace std;

class Array
{
public:
    Array():length(0){num = NULL;};
    Array(int * a): num(a), length(5){};
    void display();
private:
    const int length;
    int * num;
};

void Array::display()
{
	cout << num << " " << length << endl;
}

int main()
{
	int a;
	Array test1;
	test1.display();
	Array test2(&a);
	test2.display();
	return 0;
}