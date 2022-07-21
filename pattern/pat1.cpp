#include <iostream>
#include <cmath>
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
    for (int row = 1; row <= 2 * n; row++)
    {
        // find star in a row
        int c = row > n ? 2 * n - row : row;
        for (int col = 1; col <= c; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern28(int n)
{
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        // find star in a row
        int c = row > n ? 2 * n - row : row;
        // find space in a row
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
    //    *
    //   * *
    //  * * *
    // * * * *
    //  * * *
    //   * *
    //    *
}
void pattern30(int n)
{
    for (int row = 0; row <= n; row++)
    {

        for (int space = 0; space < n - row; space++)
        {
            cout << "  ";
        }
        for (int col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        for (int col = 2; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    //          1
    //       2 1 2
    //     3 2 1 2 3
    //   4 3 2 1 2 3 4
    // 5 4 3 2 1 2 3 4 5
}
void pattern17(int n)
{
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        int c = row > n ? 2 * n - row : row;
        for (int space = 0; space < n - c; space++)
        {
            cout << "  ";
        }
        for (int col = c; col >= 1; col--)
        {
            cout << col << " ";
        }
        for (int col = 2; col <= c; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    //       1
    //     2 1 2
    //   3 2 1 2 3
    // 4 3 2 1 2 3 4
    //   3 2 1 2 3
    //     2 1 2
    //       1
}
void pattern31(int n)
{
    int N = n;
    n = 2 * n;
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= n; col++)
        {
            int antEveryIndex = N - min(min(row, col), min(n - row, n - col));
            cout << antEveryIndex << " ";
        }

        cout << endl;
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
    // pattern30(4);
    // pattern17(5);
    pattern31(4);

    return 0;
}