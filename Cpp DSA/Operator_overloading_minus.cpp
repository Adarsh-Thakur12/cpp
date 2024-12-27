#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void show()
    {
        cout << real << " - " << imag << " i ";
    }
    void operator - (Complex &c2)
    {
        int ansreal = this->real - c2.real;
        int ansimg = this->imag - c2.imag;
        Complex c3(ansreal, ansimg);
        cout << "Ans = ";
        c3.show();
    }
};
int main()
{
    Complex c1(5, 4);
    Complex c2(2, 1);
    c1 - c2;
}