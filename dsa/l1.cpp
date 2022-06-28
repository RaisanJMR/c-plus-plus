#include <iostream>
using namespace std;
// C++ program to insert a node at begining of a linked list
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // GLOBAL variable

void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    cout << "How many numbers\n"
         << endl;
    int n, i, x;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter the number"
             << endl;
        cin >> x;
        Insert(x);
        Print();
    }

    return 0;
}