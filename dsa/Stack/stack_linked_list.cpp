#include <bits/stdc++.h>
using namespace std;
// stack using linkedlist
class StackNode
{
public:
    int data;
    StackNode *next;
};

StackNode *newNode(int data)
{
    StackNode *stacknode = new StackNode();
    stacknode->data = data;
    stacknode->next = NULL;
    return stacknode;
}

int isEmpty(StackNode *root)
{
    cout << "from is empty:" << !root << endl;
    return !root;
}

void Push(StackNode **root, int data)
{
    StackNode *stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    cout << data << " Pushed to stack\n";
}

int Pop(StackNode **root)
{
    if (isEmpty(*root))
        return INT_MIN;
    StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int Peek(StackNode *root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

// Driver code
int main()
{
    StackNode *root = NULL;

    Push(&root, 1);
    Push(&root, 2);
    Push(&root, 3);
    Push(&root, 4);

    cout << Pop(&root) << " popped from stack\n";

    cout << "Top element is " << Peek(root) << endl;

    cout << "Elements present in stack : " << endl;
    // print all elements in stack :
    while (!isEmpty(root))
    {
        // print top element in stack
        cout << Peek(root) << " " << endl;
        // remove top element in stack
        Pop(&root);
    }

    return 0;
}