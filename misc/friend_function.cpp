#include <iostream>
using namespace std;

class Sample
{

    int a;
    int b;

public:
    void setvalue()
    {

        cout << "\nEnter the value of a:";
        cin >> a;
        cout << "\nEnter the value of b:";
        cin >> b;
    }
    friend float mean(Sample s);
};

float mean(Sample s)
{
    return float((s.a + s.b) / 2.0);
}

int main()
{

    Sample x;
    x.setvalue();
    cout << "Mean value=" << mean(x) << "\n";
    return 0;
}

