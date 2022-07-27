
#include <bits/stdc++.h>
using namespace std;

string removeCharRecursive(string str, char X)
{

    if (str.length() == 0)
    {
        return "";
    }

    if (str[0] == X)
    {

        return removeCharRecursive(str.substr(1), X);
    }

    return str[0] + removeCharRecursive(str.substr(1), X);
}

int main()
{

    string str = "raisan";
    char X = 'a';
    str = removeCharRecursive(str, X);
    cout << str << endl;
    return 0;
}
