#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    // your code  goes here
    int size = a.size();
    int n = k % size;
    for (int i = 1; i <= n; i++)
    {
        int b = a[size - 1];
        a.pop_back();
        a.emplace(a.begin(), b);
    }
    return a;
}
/**********************Main Function*************************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{7,9,1,3,5};
    vector<int> arr;
    arr=kRotate(vctr,2);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
