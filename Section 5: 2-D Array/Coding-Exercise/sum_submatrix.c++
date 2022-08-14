#include <bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec)
{
    // your code goes here
    int m = v.size();
    int n = v[0].size();
    int ans = 0;
    int check = 0;
    // Build sum_matrix :
    // for row:
    vector<vector<int>> vctr(m, vector<int>(n, 0));
    vctr[0][0] = v[0][0];
    for (int i = 1; i < n; i++)
    {
        vctr[0][i] = vctr[0][i - 1] + v[0][i];
    }
    // For first column:
    for (int j = 1; j < m; j++)
    {
        vctr[j][0] = vctr[j - 1][0] + v[j][0];
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            vctr[i][j] = vctr[i - 1][j] + vctr[i][j - 1] - vctr[i - 1][j - 1] + v[i][j];
        }
    }
    ans = vctr[er][ec];
    if (sr >= 1)
    {
        ans -= vctr[sr - 1][ec];
        check++;
    }
    if (sc >= 1)
    {
        ans -= vctr[er][sc - 1];
        check++;
    }
    if (check == 2)
    {
        ans += vctr[sr - 1][sc - 1];
    }
    return ans;
}

int main(int argc, char const *argv[])
{

    return 0;
}
