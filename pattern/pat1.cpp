#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // for every row run col
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // for every row run col
        for (int col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // for every row run col
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void pattern4(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // for every row run col
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        // 1
        // 1 2
        // 1 2 3
        // 1 2 3 4
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int row = 0; row < 2 * n; row++)
    {
        // for every i run col
        int c = row > n ? 2 * n - row : row;
        for (int col = 0; col < c; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern28(int n)
{
    for (int row = 0; row < 2 * n; row++)
    {
        // for every i run col
        int c = row > n ? 2 * n - row : row;
        int spaces = n - c;
        for (int s = 0; s < spaces; s++)
        {
            cout << " ";
        }

        for (int col = 0; col < c; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern30(int n)
{
    for (int row = 1; row <= n; row++)
    {

        for (int space = 0; space < n - row; space++)
        {
            cout << " ";
        }
        for (int col = row; col >= 1; col--)
        {
            cout << col << endl;
        }
        for (int col = 2; col <= row; col++)
        {
            cout << col;
        }
    }
}
int main()
{
    // pattern1(4);
    // pattern2(4);
    // pattern3(4);
    // pattern4(4);
    // pattern5(4);
    // pattern28(4);
    pattern30(4);

    return 0;
}