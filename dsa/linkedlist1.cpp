#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

void Insert(int data, int position)
{
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if (position == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    // from position 3 onwards
    for (int i = 0; i < position - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

int main()
{
    head = NULL;
    Insert(2, 1); // List: 2
    Insert(3, 2); // List: 2,3
    Insert(4, 1); // List: 4,2,3
    Insert(5, 2); // List: 4,5,2,3
    return 0;
}