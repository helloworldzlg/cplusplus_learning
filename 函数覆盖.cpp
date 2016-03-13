
/**

覆盖首先要求有继承关系，其次是要求构成继承关系的两个类中必须具有相同函数签名的成员函数，

并且这两个成员函数必须是虚成员函数，具备这两个条件后，派生类中的虚成员函数则会覆盖基类

中的同名的虚成员函数。如果我们通过基类指针或引用来调用虚成员函数，则会形成多态。
**/



#include<iostream>
using namespace std;



class base
{
public :
    virtual void vir1(){}
    virtual void vir2(){}
};

class derived : public base
{
public:
    void vir1(){}
    void vir2(){}
};

int main()
{
    base * p;
    p = new derived;
    p->vir1();
    p->vir2();
    delete p;
    return 0;
}
