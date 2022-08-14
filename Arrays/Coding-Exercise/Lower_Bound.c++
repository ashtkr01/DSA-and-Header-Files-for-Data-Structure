#include <bits/stdc++.h>
using namespace std;

/**********************To find the lower bound using Binary Search***************************/
int lowerBound(vector<int> A, int Val)
{
    // your code goes here
    int a = 0;
    int b = A.size() - 1;
    int index = -1;
    while (a <= b)
    {
        int mid = (a + b) / 2;
        if (A[mid] == Val)
        {

            return A[mid];
        }
        else if (Val < A[mid])
        {
            b = mid - 1;
            index = mid - 1;
        }
        else if (A[mid] < Val)
        {
            a = mid + 1;
            index = mid;
        }
    }
    if (index < 0)
    {
        return -1;
    }
    return A[index];
}
/****************************************Main Function*****************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{1, 2, 3, 4, 6};
    int value;
    cin >> value;
    cout << lowerBound(vctr, value) << endl;
    return 0;
}
