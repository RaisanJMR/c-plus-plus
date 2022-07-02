#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head; // pointer to head node

// function to create a node
struct Node *getNewNode(int x)
{

    struct Node *newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    // returns a pointer to node
    return newNode;
}

void InsertAtHead(int x)
{
    struct Node *temp = getNewNode(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void Print()
{
    struct Node *temp = head;
    cout << "Forward: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        ;
        temp = temp->next;
    }
}

void ReversePrint()
{
    struct Node *temp = head;
    if (temp == NULL)
        return;
    // step[1] =>  Go To Last Node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // step[2] =>  Traverse back using previous pointer
    cout << "Reverse: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << "<-";
        temp = temp->prev;
    }
}

int main()
{
    head = NULL; 

    InsertAtHead(2);
    InsertAtHead(3);
    InsertAtHead(4);
    InsertAtHead(5);
    ReversePrint();

    return 0;
}