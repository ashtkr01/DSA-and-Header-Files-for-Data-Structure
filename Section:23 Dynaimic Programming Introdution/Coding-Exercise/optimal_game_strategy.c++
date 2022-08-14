#include <bits/stdc++.h>
using namespace std;
//REcursive approach:
int maxProfit(int i , int  j ,vector<int> vctr)
{
    if(i > j )
    {
        return 0;
    }
   int a = INT_MIN;
   int b = INT_MIN;

   a = vctr[i]  + min( maxProfit(i+2 , j  ,  vctr ) , maxProfit(i+1 , j-1 , vctr));

   b = vctr[j] + min(maxProfit(i+1 , j-1 , vctr ) , maxProfit( i , j-2 , vctr));

   return max(a , b);
}
//DP aPPROACH:

int maxProfitDP(int i , int  j ,vector<int> vctr , vector<vector<int>> &dp)
{
    if(i > j )
    {
        return 0;
    }
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
   int a = INT_MIN;
   int b = INT_MIN;

   a = vctr[i]  + min( maxProfitDP(i+2 , j  ,  vctr , dp ) , maxProfitDP(i+1 , j-1 , vctr , dp));

   b = vctr[j] + min(maxProfitDP(i+1 , j-1 , vctr , dp ) , maxProfitDP( i , j-2 , vctr , dp));

   return dp[i][j] = max(a , b);
}

int MaxValue(int n, vector<int> v){
//Write your code here. Do not modify the function or parameters. You can use a helper function if needed.
   int i=0;
   int j= v.size()-1;
   vector<vector<int>> dp(j+1 , vector<int> ( j + 1 , -1));
   //Call:
   return maxProfitDP( i , j , v , dp);
}

//Main FUnction:
int main(int argc, char const *argv[])
{
    int size; 
    cin>>size;
    vector<int> vctr(size , 0);
    //Initialize the vector:
    for(int i=0;i<size; i++)
    {
        cin>>vctr[i];
    }
    //Call:
    cout<<MaxValue(size , vctr);
    return 0;
}
