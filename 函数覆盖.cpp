
/**

��������Ҫ���м̳й�ϵ�������Ҫ�󹹳ɼ̳й�ϵ���������б��������ͬ����ǩ���ĳ�Ա������

������������Ա�������������Ա�������߱��������������������е����Ա������Ḳ�ǻ���

�е�ͬ�������Ա�������������ͨ������ָ����������������Ա����������γɶ�̬��
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
