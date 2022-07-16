#include <iostream>
using namespace std;
class complex
{
    const float real= 7.6;
    const float imag = 2.56;
    public:
    float get_real() const
    {
        return real;
    }
    float get_imag() const
    {
        return imag;
    }
};
int main()
{
    const complex comp;
    cout<<"\t"<<comp.get_real()<<"\t"<<"+"<<"\t"<<comp.get_imag()<<"i"<<endl;
    return 0;
}