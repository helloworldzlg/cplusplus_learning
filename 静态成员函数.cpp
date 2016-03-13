#include<iostream>
using namespace std;


class test
{
public:
    static void add(int a);
};

void test::add(int a)
{
    static int num = 0;
    int count = 0;
    num += a;
    count += a;
    cout<<num<<" "<<count<<endl;
}


int main()
{
    test one,two,three;
    one.add(5);
    two.add(4);
    three.add(11);
    return 0;
}
