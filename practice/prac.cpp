#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
public:
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    void show()
    {
        cout<<real<< " + "<<imag<<"i"<<endl;
    }
    void operator + (Complex &n2)
    {
        int realsum=this->real+n2.real;
        int imagsum=this->imag+n2.imag;
        Complex n3(realsum,imagsum);
        n3.show();
    }
};
int main()
{
    Complex n1(5,6);
    Complex n2(4,5);
    n1.show();
    n2.show();
    n1+n2;
}