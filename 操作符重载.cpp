#include <iostream>
using namespace std;

class complex
{
public:
    complex();
    complex(double a);
    complex(double a, double b);
    complex operator+(const complex & A)const;
    complex operator-(const complex & A)const;
    complex operator*(const complex & A)const;
    complex operator/(const complex & A)const;
    void display()const;
private:
    double real;   //������ʵ��
    double imag;   //�������鲿
};

complex::complex()
{
    real = 0.0;
    imag = 0.0;
}

complex::complex(double a)
{
    real = a;
    imag = 0.0;
}

complex::complex(double a, double b)
{
    real = a;
    imag = b;
}

//��ӡ����
void complex::display()const
{
    cout<<real<<" + "<<imag<<" i ";
}

//���ؼӷ�������
complex complex::operator+(const complex & A)const
{
    complex B;
    B.real = real + A.real;
    B.imag = imag + A.imag;
    return B;
}

//���ؼ���������
complex complex::operator-(const complex & A)const
{
    complex B;
    B.real = real - A.real;
    B.imag = imag - A.imag;
    return B;
}

//���س˷�������
complex complex::operator*(const complex & A)const
{
    complex B;
    B.real = real * A.real - imag * A.imag;
    B.imag = imag * A.real + real * A.imag;
    return B;
}

//���س���������
complex complex::operator/(const complex & A)const
{
    complex B;
    double square = A.real * A.real + A.imag * A.imag;
    B.real = (real * A.real + imag * A.imag)/square;
    B.imag = (imag * A.real - real * A.imag)/square;
    return B;
}

int main()
{
    complex c1(4.3, -5.8);
    complex c2(8.4, 6.7);
    complex c3;
   
    //�����ļӷ�
    c3 = c1 + c2;
    cout<<"c1 + c2 = ";
    c3.display();
    cout<<endl;
   
    //�����ļ���
    c3 = c1 - c2;
    cout<<"c1 - c2 = ";
    c3.display();
    cout<<endl;
   
    //�����ĳ˷�
    c3 = c1 * c2;
    cout<<"c1 * c2 = ";
    c3.display();
    cout<<endl;
   
    //�����ĳ���
    c3 = c1 / c2;
    cout<<"c1 / c2 = ";
    c3.display();
    cout<<endl;
   
    return 0;
}
