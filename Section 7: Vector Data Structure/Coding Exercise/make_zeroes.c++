#include <bits/stdc++.h>
using namespace std;
//Make column zero:
void make_column_zero(vector<vector<int>> &arr, int j)
{
    for (int k = 0; k < arr.size(); k++)
    {
        if (j < arr[k].size())
        {
            arr[k][j] = 0;
        }
    }
}
//Make row zero:
void make_row_zero(vector<vector<int>> &arr, int i)
{
    for (int k = 0; k < arr[i].size(); k++)
    {
        arr[i][k] = 0;
    }
}

vector<vector<int>> makeZeroes(vector<vector<int>> arr)
{
    // your code goes here
    vector<pair<int, int>> vctr;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 0)
            {
                vctr.push_back({i, j});
                //   arr[i]={0};
                //   make_row_zero(arr,i);
                //   make_column_zero( arr, j);
            }
        }
    }
    //REplace zero:
    for (auto x : vctr)
    {
        make_row_zero(arr, x.first);
        make_column_zero(arr, x.second);
    }
    return arr;
}

/*************************************Main Function**************************************/
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {{5, 4, 3, 9},
                               {2, 0, 7, 6},
                               {1, 3, 4, 0},
                               {9, 8, 3, 4}};
    arr = makeZeroes(arr);

    //Print the vector:
    for (auto x : arr)
    {
        for (auto y : x)
        {
            cout << y << "  ";
        }
        cout << endl;
    }
    return 0;
}
