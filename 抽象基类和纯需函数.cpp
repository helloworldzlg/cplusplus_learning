#include<iostream>
using namespace std;

class base
{
public :
    base(){x = 0;}
    base(int a){x = a;}
    virtual void display() = 0;
    int getx(){return x;}
private:
    int x;
};

class derived1 : public base
{
public:
    derived1(int a){ y = a;}
private:
    int y;
};

class derived2 : public base
{
public:
    derived2(int a, int b):base(a){ z = b;}
    void display()
    {
        cout<<getx()<<" "<<z<<endl;
    }
private:
    int z;
};

int main()
{
    //base b;    //compile error
    //derived1 d1(5);   //compile error
    derived2 d2(5,6);
    d2.display();
    return 0;
}
