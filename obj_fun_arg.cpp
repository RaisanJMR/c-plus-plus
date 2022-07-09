// Object as function argument
#include <iostream>
using namespace std;
class Complex
{

    int re, im;

public:
    void get()
    {

        cout << "\nEnter real part:";
        cin >> re;
        cout << "\nEnter imaginary part:";
        cin >> im;
    }
    void disp()
    {

        cout << re << "+" << im << "i"
             << "\n";
    }
    void sum(Complex, Complex);
};

void Complex::sum(Complex c1, Complex c2)
{

    re = c1.re + c2.re;
    im = c1.im + c2.im;
}
int main()
{

    Complex c1, c2, c3;
    cout << "\nenter 1st complex no:\n";
    c1.get();
    cout << "\nenter 2st complex no:\n";
    c2.get();
    cout << "\nthe 1st complex no is:";
    c1.disp();
    cout << "\nthe 2nd complex no is:";
    c2.disp();
    c3.sum(c1, c2);
    cout << "\nthe sum of two complex no.s are:";
    c3.disp();
    return 0;
}