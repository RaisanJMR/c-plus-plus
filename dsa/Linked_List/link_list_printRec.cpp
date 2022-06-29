// Print a link list using recursion
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


// Here insertion of an element goes at end
struct Node *Insert(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
        head = temp;
    else
    {
        Node *temp1 = head;
        while (temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}

// To print in reverse order using recursion
void reversePrint(struct Node *p)
{
    if (p == NULL)
    {
        return;
    }
    reversePrint(p->next);
    cout << p->data << endl;
}

//To simply print a list using recursion

// void Print(struct Node *p)
// {
//     if (p == NULL)
//     {
//         return;
//     } 
//     cout << p->data << endl;
//     Print(p->next);
// }


int main()
{
    struct Node *head = NULL; // Local variable
    head = Insert(head, 1);
    head = Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);
    reversePrint(head);
    // Print(head);
    return 0;
}