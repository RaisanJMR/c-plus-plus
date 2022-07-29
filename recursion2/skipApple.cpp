
#include <bits/stdc++.h>
using namespace std;

string skipApple(string str)
{

    if (str.length() == 0)
    {
        return "";
    }

    if (str.find_first_of("apple"))
    {

        return skipApple(str.substr(5));
    }

    return str[0] + skipApple(str.substr(1));
}

int main()
{

    string str = "bccapplehve";
    str = skipApple(str);
    cout << str << endl;
    return 0;
}
