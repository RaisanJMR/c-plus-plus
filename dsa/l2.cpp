#include <iostream>
using namespace std;
// C++ program to insert a node at begining of a linked list
struct Node
{
    int data;
    struct Node *next;
};

Node *Insert(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}

void Print(Node *head)
{
    cout << "List" << endl;
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    cout << "How many numbers:"
         << endl;
    int n, i, x;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter the number:"
             << endl;
        cin >> x;
        head = Insert(head, x);
        Print(head);
    }

    return 0;
}