#include <iostream>
using namespace std;

// C++ program to delete a node at nth of a linked list
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void Insert(int data, int n)
{
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void Delete(int n)
{
    struct Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        delete temp1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
}
void Print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    Insert(2, 1); // 2
    Insert(3, 2); // 2,3
    Insert(4, 3); // 2,3,4
    Insert(5, 4); // 2,3,4,5
    // Print();
    int n;
    cout << "Enter the position : " << endl;
    cin >> n;
    Delete(n);
    Print();
    return 0;
}