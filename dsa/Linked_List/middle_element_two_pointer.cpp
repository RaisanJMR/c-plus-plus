// Find middle element of a linked list using two pointer
// they are called fast_pointer and slow_pointer
// fast_pointer jumps two nodes at a time
// slow_pointer jumps only once
// when the fast_pointer reaches end slow_pointer will be in middle

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class NodeOperations
{
public:
    void PushNode(class Node **head, int data)
    {
        // create a newnode
        class Node *new_node = new Node();
        new_node->data = data;
        new_node->next = *head;
        head = *new_node;
    }
    void PrintNode(class Node *head)
    {
        while (head != NULL)
        {
            cout << head->data << "->" << endl;
            head = head->next;
        }
        cout << "NULL" << endl;
    }
    void PrintMiddle(class Node *head)
    {
        class Node *slow_ptr = head;
        class Node *fast_ptr = head;
        if (head != NULL)
        {
            while (fast_ptr != NULL && fast_ptr->next != NULL)
            {
                fast_ptr = fast_ptr->next->next;
                slow_ptr = slow_ptr->next;
            }
            cout << "middle element is [" << slow_ptr->data << "]" << endl;
        }
    }
};

int main()
{
    class Node *head = NULL;
    class NodeOperations *temp = new NodeOperations();
    for (int i = 5; i > 0; i--)
    {
        temp->PushNode(&head, i);
        temp->PrintNode(head);
        temp->PrintMiddle(head);
    }

    return 0;
}