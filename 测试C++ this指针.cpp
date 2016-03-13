#include<iostream>
using namespace std;
   
    class book
{
public:
    book(){price = 0.0; title = NULL;}
    void copy(book &b);
private:
    double price;
    char * title;
};

void book::copy(book &b)
{
    if(this == &b)
    {
        cout<<"same object!"<<endl;
        return;
    }
    else
    {
        price = b.price;
        cout << "new object!" << endl;
    }
}

int main()
{
    book Alice;
    book Harry;
    Harry.copy(Alice);
    Harry.copy(Harry);   
    return 0;
}
