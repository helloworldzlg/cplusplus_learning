#include<iostream>
using namespace std;

class book
{
public:
    book(){}
    book(char* a, double p);
    friend void display(book &b);
private:
    double price;
    char * title;
};

book::book(char* a, double p) 
{
    title = a;
    price = p;
}

void display(book &b)
{
    cout<<"The price of "<<b.title<<" is $"<<b.price<<endl;
}

int main()
{
    book Alice("Alice in Wonderland",29.9);
    display(Alice);
    book Harry("Harry potter", 49.9);
    display(Harry);
    return 0;
}
