#include<iostream>
using namespace std;

enum language{none, cpp, java, python, javascript, php, ruby};

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

class codingbook: public book
{
public :
    codingbook():book(){lang = none;}
    codingbook(char * t, double p, language lang);
    void setlang(language lang);
    language getlang(){return lang;}
    void display();
private:
    language lang;
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

void codingbook::setlang(language lang)
{
    this->lang = lang;
}

codingbook::codingbook(char * t, double p, language lang):book(t,p)
{
    this->lang = lang;
}

void codingbook::display()
{
    book::display();
    cout<<"The language is "<<lang<<endl;   
}

int main()
{
    codingbook cpp;
    cpp.display();
    codingbook java("Thinking in Java", 59.9, java);
    java.display();
    return 0;
}
