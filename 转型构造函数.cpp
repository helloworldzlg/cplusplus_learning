#include <iostream>

using namespace std;

class student
{
public:
    student(){};
    student(char * n){name = n;};
    //explicit student(char * n){name = n;};
    void display();
private :
    char * name;
};

void student::display()
{
	cout << name << endl;
}

void func(student stu)
{
	stu.display();
}

int main()
{
	char *p = "helloworld";
	student s;
	func(p);
}
