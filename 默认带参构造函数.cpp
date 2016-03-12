#include<iostream>
using namespace std;

class book
{
public:
    book(){}
    book(char* a, double p = 5.0);
    void display();
private:
    double price;
    char * title;
};

book::book(char* a, double p)  //�ڶ��庯����ʱ����Բ�ָ��Ĭ�ϲ���
{
    title = a;
    price = p;
}

void book::display()
{
    cout<<"The price of "<<title<<" is $"<<price<<endl;
}

int main()
{
    book Harry("Harry Potter", 49.9);
    Harry.display();
    book Gone("Gone with the Wind");
    Gone.display();
    return 0;
}
