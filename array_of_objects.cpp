#include <iostream>
#include <string.h>
using namespace std;

class Bank
{

    int balance, acc_number;
    char name[30], type[20];

public:
    void insert()
    {

        cout << "NAME: " << endl;
        cin >> name;
        cout << "ACCOUNT_NUMBER: " << endl;
        cin >> acc_number;
        cout << "SAVINGS/CURRENT: " << endl;
        cin >> type;
        cout << "BALANCE: " << endl;
        cin >> balance;
    }

    void deposite()
    {
        int dep;
        cout << "AMOUNT: " << endl;
        cin >> dep;
        balance = balance + dep;
        cout << "BALANCE: " << balance << endl;
    }

    void withdraw()
    {
        int amount;
        if (strcmp(type, "savings") == 0)
        {

            if (balance < 1000)

            {
                cout << "WITHDRAWAL NOT POSSIBLE" << endl;
                cout << "AMOUNT BELOW MINIMUM BALANCE" << endl;
            }
            else
            {
                cout << "ENTER THE AMOUNT TO WITHDREW";

                cin >> amount;
                if ((balance - amount) < 1000)
                {
                    cout << "Insufficient balance!!!" << endl;
                    cout << "\nAmount below minimum balance" << endl;
                }
                else
                {
                    cout << "withdrawing amount." << endl;

                    balance = balance - amount;

                    cout << "\nCurrent balance: " << balance;
                }
            }
        }
        else if ((strcmp(type, "current")) == 0)
        {
            if (balance != 0)
            {
                cout << "withdrawal is not possible!!!";
                cout << "\nAmount below minimum balance";
            }
            else
            {
                cout << "Enter the amount to be withdrawn";
                cin >> amount;
                if ((balance - amount) <= 0)
                {
                    cout << "Insufficient balance!!!";
                    cout << "\nAmount below minimum balance";
                }
                else
                {
                    cout << "withdrawing amount .. ";
                    balance = balance - amount;
                    cout << "\nCurrent balance: " << balance;
                }
            }
        }
    }

    void display()
    {

        cout << "NAME: " << name << endl;
        cout << "ACCOUNT NUMBER: " << acc_number << endl;
        cout << "ACCOUNT TYPE: " << type << endl;
        cout << "BALANCE: " << balance << endl;
    }

    int account()
    {

        return acc_number;
    }
};

int main()
{
    int n, i, acc_number, ch, f;
    f = 0;
    cout << "ENTER NUMBER OF CUSTOMERS: \n" << endl;
    cin >> n;
    Bank b[n];
    while (1)
    {

        cout << "1.NEW RECORDS" << endl;
        cout << "2.DEPOSITE" << endl;
        cout << "3.WITHDRAW" << endl;
        cout << "4.DISPLAY" << endl;
        cout << "5.QUIT\n" << endl;

        cout << "ENTER YOUR CHOICE: \n" << endl;
        cin >> ch;
        switch (ch)
        {

        case 1:
            for (i = 0; i < n; i++)
            {

                b[i].insert();
            }
            break;

        case 2:

            cout << "ENTER YOUR ACCOUNT NUMBER: \n" << endl;
            cin >> acc_number;
            for (i = 0; i < n; i++)
            {
                if (acc_number == b[i].account())
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                b[i].deposite();
            }
            else
            {
                cout << "ACCOUNT NOT FOUND: \n" << endl;
            }
            break;

        case 3:
            cout << "ENTER THE ACCOUNT NUMBER: \n" << endl;
            cin >> acc_number;

            for (i = 0; i < n; i++)
            {
                if (acc_number == b[i].account())
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                b[i].withdraw();
            }
            else
            {
                cout << "ACCOUNT NOT FOUND: \n" << endl;
            }
            break;
        case 4:
           cout << "ENTER THE ACCOUNT NUMBER: \n" << endl;
            cin >> acc_number;
            for (i = 0; i < n; i++)
            {
                if (acc_number == b[i].account())
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                b[i].display();
            }
            else
            {
                  cout << "ACCOUNT NOT FOUND: \n" << endl;
            }
            break;
        case 5:
            return 0;
        default:
            cout << "WRONG CHOICE" << endl;
        }
    }
    return 0;
}
