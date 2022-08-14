#include<bits/stdc++.h>
using namespace std;

int longestIncSub(vector<int> vctr , vector<int> dp)
{
    for(int i=0;i<vctr.size();i++)
    {
        int comp = 0;
        for(int j=0;j<i;j++)
        {
            if(vctr[i] > vctr[j])
            {
           dp[i] = max(comp , dp[j]+1);

            }
        }
        if(dp[i]==0)
        {
            dp[i]=1;
        }
    }
    int res=vctr.size()-1;
    return dp[res];
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> vctr(n,0);
    vector<int> dp(n,0);

    for(int i=0;i<n;i++)
    {
        cin>>vctr[i];
    }
    cout<<"Result :"<<longestIncSub(vctr , dp)<<endl;
    return 0;
}
