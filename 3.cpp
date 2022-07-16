#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;
    public:
    Time()
    {
        hr= 12;
        min= 0;
        sec= 0;
        cout<<"The time in H:M:S from default constructor:"<<endl;
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    Time(int se)
    {
        sec= se;
        int h, m, s;
        h= (sec/3600);
        m= (sec-(3600*h))/60;
        s= (sec-(3600*h)-(m*60));
        cout<<"The time in H:M:S from parameterized constructor:"<<endl;
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    Time (Time &t)
    {
        hr= t.hr;
        min= t.min;
        sec= t.sec;
        cout<<"The time in H:M:S from copy constructor:"<<endl;
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
int main()
{
    Time t1;
    int sec;
    cout<<"Enter time in sec:- ";
    cin>>sec;
    Time t2(sec);
    Time t3(t1);
    return 0;
}