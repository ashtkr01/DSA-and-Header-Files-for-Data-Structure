#include<bits/stdc++.h>
using namespace std;

int tilingProblem(int n, int m)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n<m )
    {
        return 1;
    }
    else if(n==m)
    {
        return 2;
    }
    return tilingProblem(n-1,m) + tilingProblem(n-m,m);
}

int main(int argc, char const *argv[])
{
    int n , m;
    cin>>n>>m;
    cout<<tilingProblem(n,m)<<endl;
    return 0;
}
