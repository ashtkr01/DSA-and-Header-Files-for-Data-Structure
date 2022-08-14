#include <bits/stdc++.h>
using namespace std;
// Helper
bool helper(vector<vector<char>> &board, int i, int j, int m, int n, int idx, string word, vector<vector<int>> &vctr)
{
    if (i < 0)
    {
        return false;
    }
    if (i >= m)
    {
        return false;
    }
    if (j < 0)
    {
        return false;
    }
    if (j >= n)
    {
        return false;
    }
    if ((vctr[i][j] == 0) and (board[i][j] == word[idx]) and (idx == word.length() - 1))
    {

        return true;
    }

    if ((vctr[i][j] == 0) and (board[i][j] == word[idx]))
    {
        vctr[i][j] = 1;
        bool res1 = false;
        res1 = helper(board, i, j + 1, m, n, idx + 1, word, vctr);
        if (res1 == true)
        {
            return true;
        }
        bool res2 = false;
        res2 = helper(board, i + 1, j, m, n, idx + 1, word, vctr);
        if (res2 == true)
        {
            return true;
        }
        bool res3 = false;
        res3 = helper(board, i, j - 1, m, n, idx + 1, word, vctr);
        if (res3 == true)
        {
            return true;
        }
        bool res4 = false;
        res4 = helper(board, i - 1, j, m, n, idx + 1, word, vctr);
        if (res4 == true)
        {
            return true;
        }
        vctr[i][j] = 0;
    }
    return false;
}
bool wordSearch(vector<vector<char>> &board, string word)
{
    bool res = false;
    int m = board.size();
    int n = board[0].size();
    vector<vector<int>> vctr(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (word[0] == board[i][j])
            {
                // vctr[i][j] == 1;
                cout << word[0] << endl;
                cout << i << " " << j << endl;
                int idx = 0;
                bool result = false;
                result = helper(board, i, j, m, n, idx, word, vctr);
                if (result == true)
                {
                    return true;
                }
                // vctr[i][j] = 0;
            }
        }
    }
    return false;
}
// Main
int main(int argc, char const *argv[])
{
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    // string word = "ABCD";
    string word = "SEE";
    cout << wordSearch(board, word) << endl;

    return 0;
}
