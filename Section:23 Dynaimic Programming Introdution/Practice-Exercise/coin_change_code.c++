#include<bits/stdc++.h>
using namespace std;

int minRes(vector<int> vctr)
{
    int min=vctr[0];
    for(int i=1;i<vctr.size();i++)
    {
        if(min > vctr[i])
        {
            min = vctr[i];
        }
    }
    return min;
}
/*************************************By Recursion********************************/
int coinChange(int n , vector<int> denom)
{
 if(n<=0)
 {
     return 0;
 }
vector<int> vctr;
for(int i=0;i<denom.size();i++)
{
    if((n-denom[i]) >= 0)
    {
        int a=coinChange(n-denom[i] , denom);
       vctr.push_back(a);
    }
}
int result = minRes(vctr);
vctr.erase(vctr.begin() , vctr.end());
return 1 + result;
}

/**************************Dynamic approch Top Down DP*******************************/
int coinChangeDP(int n , vector<int> denom , vector<int> &dp)
{
 if(n<=0)
 {
     return 0;
 }
 if(dp[n]!=0)
 {
     return dp[n];
 }
vector<int> vctr;
for(int i=0;i<denom.size();i++)
{
    if((n-denom[i]) >= 0)
    {
        int a=coinChangeDP(n-denom[i] , denom , dp);
       vctr.push_back(a);
    }
}
int result = minRes(vctr);
vctr.erase(vctr.begin() , vctr.end());
return dp[n]= 1 + result;
}
/**********************************Bottom Approach************************************************/
/******************************Helper function for Bottom approach******************/
int minimum(vector<int> vtr)
{
    int min=vtr[0];
    for(int i=1;i<vtr.size();i++)
    {
        if(min>vtr[i])
        {
            min=vtr[i];
        }
    }
    return min;
}
/***************************Bottom Approach***********************************/
int minCoinChangeBottomUp(vector<int> denom , int num )
{
    vector<int> vctr(num+1 , 0);
    vector<int> vtr;
    //Initialiaze the base state:
    for(int i=0;i<denom.size();i++)
    {
        vctr[denom[i]]=1;
    }
    //Bottom approach:
    for(int i=1;i<=num;i++)
    {
        for(int j=0;j<denom.size();j++)
        {
            if(i-denom[j]>=0)
            {
                vtr.push_back(vctr[i-denom[j]]);
            }

        }
        vctr[i] = 1 + minimum(vtr);
        vtr.erase(vtr.begin(),vtr.end());
    }
    return vctr[num];
}
/***************************************End**********************************/
//Main Function:
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of denomination "<<endl;
    cin>>n;
    vector<int > denom(n,0);
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    vector<int > dp(num+1,0);
    //Print denom:
    for(int i=0;i<n;i++)
    {
        cin>>denom[i];
    }

    cout<<coinChangeDP(num , denom , dp)<<endl;
    cout<<coinChange(num , denom)<<endl;
    cout<<"Bottom Approach is:"<<endl;
    cout<<minCoinChangeBottomUp(denom , num)<<endl;
    return 0;
}
