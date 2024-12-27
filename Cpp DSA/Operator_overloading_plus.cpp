#include <iostream>
#include <string.h>
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
        cout << real << " + " << imag << "i" << endl;
    }
    void operator+(Complex &n2)
    {
        int realsum = this->real + n2.real;
        int imgsum = this->imag + n2.imag;
        Complex c3(realsum, imgsum);
        cout << "Result : ";
         c3.show();
    }
};
int main()
{
    Complex n1(5, 6);
    Complex n2(3, 4);
    n1.show();
    n2.show();
    n1+n2;
    return 0;
}
