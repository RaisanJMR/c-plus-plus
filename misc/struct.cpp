#include <iostream>
using namespace std;

struct Developer
{
    string position;
    int experience;
    int salary;
    string company;
};

struct Person
{
    string name;
    int age;
    Developer developer;
};

void printDevInfo(Developer developer)
{
    cout << "position of developer is: " << developer.position << endl;
    cout << "experience of developer is: " << developer.experience << endl;
    cout << "salary of developer is: $" << developer.salary << endl;
    cout << "company of developer is: " << developer.company << endl;
};

void printPersonInfo(Person person)
{
    cout << "name: " << person.name << endl;
    cout << "age: " << person.age << endl;
    printDevInfo(person.developer);
};

int main()
{

    Developer dev;
    dev.position = "React developer";
    dev.experience = 4;
    dev.salary = 90000;
    dev.company = "Tcs";

    Developer dev1;
    dev1.position = "angular developer";
    dev1.experience = 5;
    dev1.salary = 25000;
    dev1.company = "Net ninja";

    Developer dev2;
    dev2.position = "C++ developer";
    dev2.experience = 14;
    dev2.salary = 35000;
    dev2.company = "New Company";

    // printDevInfo(dev);
    // printDevInfo(dev1);

    Person p;
    p.name = "Brad";
    p.age = 40;
    p.developer = dev;

    printPersonInfo(p);
    return 0;
}