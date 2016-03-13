#include<iostream>
using namespace std;

class A
{
public :
    virtual void m(){cout<<"m"<<endl;}
};

class B
{
public:
    virtual void f(){cout<<"f"<<endl;}
};

int main()
{
    A * a;
    a = dynamic_cast<A *>(new B);
    if(a)
    {
        cout<<"B to A is ok"<<endl;
        delete a;
    }
    else
        cout<<"B to A is error"<<endl;
    B * b;
    b = dynamic_cast<B *>(new A);
    if(b)
    {
        cout<<"A to B is ok"<<endl;
        delete b;
    }
    else
        cout<<"A to B is error"<<endl;

    return 0;
}
