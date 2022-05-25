#include <iostream>

using namespace std;

int main()
{
    // arr[row][col]
    int arr[2][3] = {{1, 2, 10}, {3, 4, 65}};

    for (int i = 0; i < 2; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {

            cout << arr[i][j] << "  ";
        }
        cout << "\n"
             << endl;
    }
    return 0;
}