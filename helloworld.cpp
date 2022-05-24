#include <iostream>

using namespace std;

int main() {
    double grade[10]={10,20,30,40,50,60,70,80,90,100};
    for (const int &var :grade)
    {
        cout<<"element at position "<<&var<<"\n"<<var<<"\n";
    }
    
    return 0;
}
