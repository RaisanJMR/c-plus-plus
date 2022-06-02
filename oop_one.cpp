#include <iostream>
using namespace std;

// Class Declaration
class Employee
{

private:
    string Name;
    string Company;
    int Age;

public:

    void IntroduceYourSelf()
    {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()

{

    Employee employee = Employee("JMR", "Company 1", 25);
    employee.IntroduceYourSelf();

    Employee employee1 = Employee("Brad", "Company 2", 30);
    employee1.IntroduceYourSelf();
    return 0;
}
