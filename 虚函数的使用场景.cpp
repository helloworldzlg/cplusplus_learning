#include<iostream>
using namespace std;

class base
{
public:
    virtual void display();
};

class derived: public base
{
public:
    void display();

};

void base::display()
{
    cout<<"I'm base class!"<<endl;
}

void derived::display()
{
    cout<<"I'm derived class!"<<endl;
}

int main()
{
    base * p = new base;
    p->display();
    delete p;
    p = new derived;
    p->display();
    delete p;
    return 0;
}
