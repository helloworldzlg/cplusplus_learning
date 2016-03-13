#include<iostream>
using namespace std;

class book
{
public:
    book(){}
    book(book &b);
    book(char* a, double p = 5.0);
    void setprice(double a);
    double getprice()const;
    void settitle(char* a);
    char * gettitle()const;
private:
    double price;
    char * title;
};

book::book(book &b)
{
    price = b.price;
    title = b.title;
}

book::book(char* a, double p) 
{
    title = a;
    price = p;
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

void display(const book &b)
{
    //b.setprice(59.9);  //compile error
    cout<<"The price of "<<b.gettitle()<<" is $"<<b.getprice()<<endl;  //ok
}

int main()
{
    book Alice("Alice in Wonderland",29.9);
    display(Alice);
    book Harry("Harry potter", 49.9);
    display(Harry);
    return 0;
}
