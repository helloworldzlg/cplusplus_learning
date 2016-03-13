#include <iostream>
using namespace std;

class A
{
public:
    void setx(int a){x = a;}
    int getx(){return x;}
private:
    int x;
};

class B
{
public:
    void setx(int a){x = a;}
    int getx(){return x;}
private:
    int x;
};

class C: public A, public B
{
public:
    void setx(int a){x = a;}
    int getx(){return x;}
private:
    int x;
};

int main()
{
    C test;
    test.setx(10);
    test.B::setx(20);
    test.A::setx(30);
    cout << test.getx() << endl;
    cout << test.B::getx() << endl;
    cout << test.A::getx() << endl;
    return 0;
}

