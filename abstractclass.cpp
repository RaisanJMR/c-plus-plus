#include <iostream>
using namespace std;

// VIRTUAL FUNCTION

class Instrument
{
public:
    // virtual void makeSound()
    // {
    //     cout << "Base class" << endl;
    // }

    virtual void makeSound() = 0;
};

class Accordian : public Instrument
{
public:
    void makeSound()
    {
        cout << "Derived class" << endl;
    }
};

class Piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Instrument *i1 = new Accordian();
    Instrument *i2 = new Piano();

    i1->makeSound();
    i2->makeSound();

    return 0;
}
