#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here

    int len = str.length();
    for (int i = len-1, j = 0; i > j; i--,j++)
    {
        if (str[j] != str[i])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    // isPalindrome(str);
    cout << isPalindrome(str) << endl;

    return 0;
}
