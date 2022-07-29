// @ binary search tree to find min element
#include <bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

int FindMin(BstNode *root)
{
    if (root == NULL)
    {
        cout << "Error: Tree is empty!" << endl;
        return -1;
    }
    else if (root->left == NULL)
    {
        return root->data;
    }
    // @ search in left sub tree
    return FindMin(root->left);
}
int main()
{

    return 0;
}