#include <iostream>
using namespace std;
class complex 
{
    float real, imag;
    static int total;
    public:
    complex()
    {
        real= 3.56;
        imag= 2.89;
        cout<<endl<<real<<"\t"<<"+"<<"\t"<<imag<<"i"<<endl;
        total++;
    }
    complex(float real, float imag)
    {
        this->real= real;
        this->imag= imag;
        total++;
    }
    float display_real()
    {
        return real;
    }
    float display_imag()
    {
        return imag;
    }
    static void display()
    {
        cout<<"No of object created:- "<<total<<endl;
    }
};
int complex::total;
int main()
{
    complex c1(4.6, 8.8);
    cout<<endl<<c1.display_real()<<"\t"<<"+"<<"\t"<<c1.display_imag()<<"i"<<endl;
    complex c2;
    c2.display();
    return 0;
}