#include <iostream>
using namespace std;
// Base class
class Food
{
public:
    string type = "coffee";
    void brand()
    {
        cout << "this is starbucks" << endl;
    }
};
// Derived Class
class IceCream : public Food
{
public:
    string vzz = "chocobar";
};
int main()
{
    IceCream myFood;
    myFood.brand();
    cout << myFood.vzz << endl;
    return 0;
}
