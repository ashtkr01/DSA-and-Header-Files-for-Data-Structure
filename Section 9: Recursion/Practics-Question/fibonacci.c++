#include<bits/stdc++.h>
using namespace std;
/******************************Fibonnacci Series*********************************/
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int ans=fibo(n-1)+fibo(n-2);
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<"Fibonnacci of "<<n<<"is :"<<fibo(n)<<endl;
    return 0;
}
