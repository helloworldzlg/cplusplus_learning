#include<iostream>
using namespace std;

class book
{
public:
    book();
    book(char* a, double p = 5.0);
    void setprice(double a);
    double getprice()const;
    void settitle(char* a);
    char * gettitle()const;
    void display();
private:
    double price;
    char * title;
};

class book_derived :public book
{
public:
    void display();
};

book::book(char* a, double p) 
{
    title = a;
    price = p;
}

book::book()
{
    title = "NoTitle";
    price = 0.0;
}

void book::setprice(double a)
{
    price = a;
}

double book::getprice()const
{
    return price;
}

void book::settitle(char* a)
{
    title = a;
}

char * book::gettitle()const
{
    return title;
}

void book::display()
{
    cout<<"The price of "<<title<<" is $"<<price<<endl;
}

void book_derived::display()
{
    cout<<"The price of "<<gettitle()<<" is $"<<getprice()<<endl;
}

int main()
{
    book_derived b;
    b.display();
    return 0;
}
