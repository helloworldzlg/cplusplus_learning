#include<iostream>
using namespace std;


class test
{
public:
    static int num;
};
int test::num = 1;

int main()
{
    test one;
    test two;
    test three;
    cout<<test::num<<" "<<one.num<<" "<<two.num<<" "<<three.num<<endl;
    test::num = 5;
    cout<<test::num<<" "<<one.num<<" "<<two.num<<" "<<three.num<<endl;
    one.num = 8;
    cout<<test::num<<" "<<one.num<<" "<<two.num<<" "<<three.num<<endl;
    two.num = 4;
    cout<<test::num<<" "<<one.num<<" "<<two.num<<" "<<three.num<<endl;
    three.num = 2;
    cout<<test::num<<" "<<one.num<<" "<<two.num<<" "<<three.num<<endl;
    return 0;
}
