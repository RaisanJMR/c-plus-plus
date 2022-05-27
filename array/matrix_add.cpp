#include <iostream>
using namespace std;
// Matrix Addition
int main()
{
    int arr[10][10], arr1[10][10], res[10][10], row, col;

    // read first matrix
    cout << "Enter the number of rows and columns matrix: " << endl;
    cin >> row >> col;

    cout << "Enter the first matrix: " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    // read second matrix
    cout << "Enter the second matrix: " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << ": ";
            cin >> arr1[i][j];
        }
    }

    // printing the matrix
    cout << "matrix A" << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << " " << arr[i][j];
            if (j == col - 1)
            {
                cout << endl
                     << endl;
            }
        }
    }
    cout << "matrix B" << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << " " << arr1[i][j];
            if (j == col - 1)
            {
                cout << endl
                     << endl;
            }
        }
    }


    // ADD arr[][] + arr1[][]
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            res[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    // Printing the result
    cout << "matrix A + matrix B = " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << " " << res[i][j];
            if (j == col - 1)
            {
                cout << endl
                     << endl;
            }
        }
    }

    return 0;
}