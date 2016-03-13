
/**
在本例中，我们列出了几种函数重载的情形。首先是函数的构造函数重载，
我们在类中声明了四个构造函数，这四个函数构成重载的关系，前面三个
函数之间只是函数参数数目不同，第四个构造函数为拷贝构造函数，该函
数与前面的默认构造函数和两个带参构造函数参数类型不同。类中的成员
函数同样可以进行重载，如本例中base类的三个fun函数。这两种情况是
类内部的函数重载，在类外部顶层函数也同样能够成函数重载关系，如本
例中的g函数，这三个函数都是顶层函数，由于函数名相同，但是函数参
数不同，构成函数重载关系。

函数重载是编译期绑定，它并不是多态。
**/


class base
{
public :
    base();
    base(int a);
    base(int a, int b);
    base( base &);
    int fun(int a);
    int fun(double a);
    int fun(int a, int b);
private:
    int x;
    int y;
};

int g(int a);
int g(double a);
int g(int a, int b);
