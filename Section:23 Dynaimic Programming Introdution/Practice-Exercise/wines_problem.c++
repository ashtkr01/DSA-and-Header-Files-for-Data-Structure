#include<bits/stdc++.h>
using namespace std;
/*************************************Purely Recursive Approach*****************************/
int maxProfitWine(int start , int n, int i , int j ,vector<int>  vctr)
{
    if(i>j or start > n)
    {
        return 0;
    }
    int a= vctr[i] *start + maxProfitWine(start+1 , n , i+1, j, vctr);
    int b = vctr[j] *start +maxProfitWine(start +1 , n , i , j-1 , vctr);

    return max(a , b);
}

/***********************************Dynamic Approach*********************************************/
int maxProfitWineDp(int start , int n , int i , int j , vector<vector<int>> dp , vector<int> vctr)
{
     if(i>j or start > n)
    {
        return 0;
    }
    if(dp[i][j] !=0)
    {
        return dp[i][j];
    }
    int a= vctr[i] *start + maxProfitWine(start+1 , n , i+1, j, vctr);
    int b = vctr[j] *start +maxProfitWine(start +1 , n , i , j-1 , vctr);

    return dp[i][j] = max(a , b);
}
int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    vector<int> vctr(size,0);
    vector<vector<int> > dp(size , vector<int> (size , 0));
    //Initialize the vector:
    for(int i=0;i<size;i++)
    {
        cin>>vctr[i];
    }
    cout<<"Answer :"<<maxProfitWine(1,size , 0 , size-1 , vctr)<<endl;

    //Call to second function:
    cout<<"Answer :"<<maxProfitWineDp(1,size , 0 , size-1 , dp ,vctr)<<endl;
    return 0;
}
