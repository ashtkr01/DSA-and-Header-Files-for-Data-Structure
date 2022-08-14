#include <bits/stdc++.h>
using namespace std;
// Helper Function: give all permutation:

long long findHelper(int value,  vector<int> coins , vector<long long> &dp)
{
    if (value == 0)
    {
        return 1;
    }
    
    if(dp[value] != -1)
    {
        return dp[value];
    }
    //Loop:
    long long res = 0;
    for(int j=0;j<coins.size();j++)
    {
        if (value - coins[j] >= 0)
    {
        res += findHelper(value - coins[j], coins , dp);
    }
        
    }
   
    return dp[value] =res;
}

/**********But we want only combination*************************************/
long long helperFunc(int val , vector<int> coins , int i , int j , vector<vector<long long>>  &dp)
{
    if(val ==0)
    {
        return 1;
    }
    if(i >= j)
    {
        return 0;
    }
    if(dp[i][val] != -1)
    {
        return dp[i][val];
    }
    int a = 0;
    int b=0;
    if(val - coins[i] >= 0)
    {
    a=helperFunc(val-coins[i] , coins , i , j , dp);
    }
    b = helperFunc(val , coins , i+1 , j , dp);
    return dp[i][val]=a+b;
}

long long findCombinations(int n, vector<int> coins)
{
    // Write your code here. Do not modify the function or parameters. You can use helper function if needed.
    long long last_idx = coins.size();
    vector<vector<long long>>  dp(last_idx,vector<long  long > ( n+1 , -1));
     return helperFunc( n , coins , 0 , last_idx , dp);
    // return findHelper(n, coins ,dp);
}
/*********************************Main Function**************************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{1  ,2 , 3};
    // vector<int> vctr{1, 2, 5};
    // int val = 5;
    int val = 4;
    // Call:
    cout << findCombinations(val, vctr) << endl;
    return 0;
}
