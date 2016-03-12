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

book::book(char* a, double p)  //在定义函数的时候可以不指定默认参数
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
