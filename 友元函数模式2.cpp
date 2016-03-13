#include<iostream>
using namespace std;

class time;

class date
{
public:
    date(int y,int m,int d);
    void display(time &t);
private:
    int year;
    int month;
    int day;
};

class time
{
public:
    time(int s,int m,int h);
    friend void date::display(time & t);
private:
    int second;
    int minute;
    int hour;
};

time::time(int s,int m,int h)
{
    second = s;
    minute = m;
    hour = h;
}

date::date(int y,int m,int d)
{
    year = y;
    month = m;
    day = d;
}

void date::display(time &t)
{
    cout<<"The time is:"<<endl;
    cout<<year<<"/"<<month<<"/"<<day<<" ";
    cout<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;
}

int main()
{
    date d(2015,1,16);
    time t(20,2,30);
    d.display(t);
    return 0;
}
