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
void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if (head != NULL)
    {
        temp->next = head;
    }

    head = temp;
}
void Print()
{
    Node *temp = head;
    cout << "List is: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "\n";
}
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
        Insert(x);
        Print();
    }

    return 0;
}