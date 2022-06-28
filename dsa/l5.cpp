#include <iostream>
using namespace std;

// C++ program to print a link list using recursion
struct Node
{
    int data;
    struct Node *next;
};
struct Node *Insert(struct Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
            temp->next = temp;
        }
    }
    return head;
}
void Print(struct Node *p)
{
    if (p == NULL)
    {
        return;
    }

    cout << p->data << endl;
    Print(p->next);
}
int main()
{
    struct Node *head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);
    head = Insert(head, 5);
    Print(head);
}