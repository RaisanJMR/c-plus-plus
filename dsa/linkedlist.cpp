#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
struct Node *head;
void Insert(int x);
void Print();
int main()
{
    head = NULL;
    cout << "How many numbers" << endl;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the number" << endl;
        cin >> x;
    }

    return 0;
}