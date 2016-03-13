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
    void display()const;
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

void book::display()const
{
    cout<<"The price of "<<title<<" is $"<<price<<endl;
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


int main()
{
    const book Alice("Alice in Wonderland",29.9);
    Alice.display();
    //Alice.setprice(51.0);//compile error
    return 0;
}
