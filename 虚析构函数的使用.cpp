#include<iostream>
using namespace std;

class base
{
public:
    base();
    virtual ~base();
private:
    int * a;
};

class derived: public base
{
public:
    derived();
    ~derived();
private:
    int * b;
};

base::base()
{
    cout<<"base constructor!"<<endl;
    a = new int[10];
}

base::~base()
{
    cout<<"base destructor!"<<endl;
    delete[] a;
}

derived::derived()
{
    cout<<"derived constructor!"<<endl;
    b = new int[1000];
}

derived::~derived()
{
    cout<<"derived destructor!"<<endl;
    delete[] b;
}

int main()
{
    base* p;
    p = new derived;
    delete p;
    return 0;
}
