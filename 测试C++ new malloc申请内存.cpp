#include<iostream>
#include <stdlib.h>

using namespace std;

class test
{
public:
    test(int i = 1){num = i;cout<<num<<" Constructor"<<endl;}
    ~test(){cout<<num<<" Destructor"<<endl;}
private:
    int num;
};

int main()
{
    test * t0 = new test(0);
    test * t1 = new test[5];
    test * t2 = (test *)malloc(sizeof(test));
    delete t0;
    delete[] t1;
    free(t2);
    return 0;
}
