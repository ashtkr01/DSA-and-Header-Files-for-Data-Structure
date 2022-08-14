#include <bits/stdc++.h>
using namespace std;
// Helper function: only recursive :
int helperFunc(int idx, int last_idx, vector<int> a, vector<int> b, vector<int> c, char check)
{
    if (idx == last_idx)
    {
        return 0;
    }
    int x = INT_MIN;
    int y = INT_MIN;
    int z = INT_MIN;

    if (check != 'a')
    {
        x = a[idx] + helperFunc(idx + 1, last_idx, a, b, c, 'a');
    }
    if (check != 'b')
    {
        y = b[idx] + helperFunc(idx + 1, last_idx, a, b, c, 'b');
    }
    if (check != 'c')
    {
        z = c[idx] + helperFunc(idx + 1, last_idx, a, b, c, 'c');
    }

    return max(x, max(y, z));
}
// DP Solution:
int helperFunc(int idx, int last_idx, vector<int> a, vector<int> b, vector<int> c, int previous, vector<vector<int>> dp)
{
    if (idx == last_idx)
    {
        return 0;
    }

    if (dp[idx][previous] != -1)
    {
        return dp[idx][previous];
    }
    int x = INT_MIN;
    int y = INT_MIN;
    int z = INT_MIN;

    if (previous != 0)
    {
        x = a[idx] + helperFunc(idx + 1, last_idx, a, b, c, 0);
    }
    if (previous != 1)
    {
        y = b[idx] + helperFunc(idx + 1, last_idx, a, b, c, 1);
    }
    if (previous != 2)
    {
        z = c[idx] + helperFunc(idx + 1, last_idx, a, b, c, 2);
    }

    return dp[idx][previous] =  max(x, max(y, z));
}
int vacation(vector<int> a, vector<int> b, vector<int> c)
{
    // Write your code here ;
    int last_idx = a.size();
    int prev = 0;
    vector<vector<int>> dp(last_idx, vector<int>(3, -1));
    return helperFunc(0, last_idx, a, b, c, prev, dp);
}

// Main function:
int main(int argc, char const *argv[])
{
    vector<int> a{10, 20, 30};
    vector<int> b{40, 50, 60};
    vector<int> c{70, 80, 90};
    // Call:
    cout << vacation(a, b, c) << endl;
    return 0;
}
