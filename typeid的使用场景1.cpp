#include <iostream>
#include <typeinfo>

using namespace std; 

class base
{
public :
    void m(){cout<<"base"<<endl;}
};

class derived : public base
{
public:
    void m(){cout<<"derived"<<endl;}
};

int main()
{
	base* p = new derived;
	
	if (typeid(p) == typeid(base*))
	{
		cout << "p == base*" << endl;
	}
	
	if (typeid(p) == typeid(derived*))
	{
		cout << "p == derived*" << endl;
	}
	
	if (typeid(*p) == typeid(base))
	{
		cout << "*p == base" << endl;
	}
	
	if (typeid(*p) == typeid(derived))
	{
		cout << "*p == derived" << endl;
	}	
	
	return 0;
}
