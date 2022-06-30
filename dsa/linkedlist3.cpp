#include <iostream>
using namespace std;

// delete a node from nth position
struct Node
{
    int data;
    Node *next;
};
// insert a node at nth position
struct Node *head;
void Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
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
void Delete(int pos)
{
    // create a temperory variable
    struct Node *temp1 = head;
    if (pos == 1)
    {
        head = temp1->next;
        delete temp1;
        return;
    }

    // then go to (pos - 1)th node
    // for that we have to run pos - 2 times loop
    for (int i = 0; i < pos - 2; i++)
    {
        // temp1 points to (pos - 1) th node
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next; // (pos) node
    temp1->next = temp2->next;        // (pos + 1) node
    delete temp2;
}
int main()
{
    int pos;
    head = NULL;

    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); // List: 2,4,6,5
    Print();
    cout << "Enter the position" << endl;
    cin >> pos;
    Delete(pos);
    Print();
    return 0;
}