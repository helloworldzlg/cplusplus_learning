#include<iostream> 

using namespace std;

class book
{
public:
    book(char *a, double p){title = a; price = p; };
    void setprice(double a);
    double getprice();
    void settitle(char* a);
    char * gettitle();
    void display();
private:
    double price;
    char * title;
};

void book::display()
{
	cout << title << " " << price << endl;
}

int main()
{
	book math("math", 50);
	math.display();
	return 0;
}
