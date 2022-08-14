#include <bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
    // your code goes here
    int a = 0;
    int b = 0;
    for (int i = 0; i < v.size(); i++)
    {
        b = a ^ v[i];
        a = b;
    }
    return b;
}
// Main Function:
int main(int argc, char const *argv[])
{
    vector<int> vctr{1, 2, 3, 4, 5, 1, 2, 3, 4};
    cout << xoring(vctr) << endl;
    return 0;
}
