#include <iostream>
#include <math.h>
using namespace std;
class complex2;
class complex1
{
    float real;
    public:
    complex1()
    {
        cout<<"Enter real part:- ";
        cin>>real;
    }
    friend void mag(complex1, complex2);
};
class complex2 
{
    float imag;
    public:
    complex2()
    {
        cout<<"Enter imag part:- ";
        cin>>imag;
    }
    friend void mag(complex1, complex2);
};
void mag(complex1 comp1, complex2 comp2)
{
    float magnitude;
    magnitude = sqrt((comp1.real*comp1.real)+(comp2.imag*comp2.imag));
    cout<<"Modulus of the complex number |z|:- "<<magnitude;
}
int main()
{
    complex1 obj_1;
    complex2 obj_2;
    mag(obj_1, obj_2);
    return 0;
}