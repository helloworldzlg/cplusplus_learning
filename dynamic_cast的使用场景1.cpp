#include<iostream>
using namespace std;

class base
{
public :
    virtual void m(){cout<<"m"<<endl;}
};

class derived : public base
{
public:
    virtual void f(){cout<<"f"<<endl;}
};

int main()
{
    derived * d;
    d = dynamic_cast<derived *>(new base);
    if(d)
    {
        cout<<"Base to Derived is ok"<<endl;
	cout << "helloworld" << endl;
        delete d;
    }
    else
        cout<<"Base to Derived is error"<<endl;
    base * b;
    b = dynamic_cast<base *>(new derived);
    if(b)
    {
        cout<<"Derived to Base is ok"<<endl;
        delete b;
    }
    else
        cout<<"Derived to Base is error"<<endl;

    return 0;
}
