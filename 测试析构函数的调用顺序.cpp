#include<iostream>
using namespace std;

class test
{
public:
    test(int i){num = i;cout<<num<<" Constructor"<<endl;}
    ~test(){cout<<num<<" Destructor"<<endl;}
private:
    int num;
};

int main()
{
    test t0(0);
    test t1(1);
    test t2(2);
    test t3(3);
    return 0;
}
