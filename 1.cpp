#include <iostream>
using namespace std;
class complex
{
    const float real= 7.6;
    float imag;
    public:
    float get_real() const
    {
        return real;
    }
    void get_imag1()
    {
        cout<<"Enter imaginary number:- ";
        cin>>imag;
    }
    float get_imag2()
    {
        return imag;
    }
};
int main()
{
    complex comp;
    comp.get_imag1();
    cout<<"\t"<<comp.get_real()<<"\t"<<"+"<<"\t"<<comp.get_imag2()<<"i"<<endl;
    return 0;
}