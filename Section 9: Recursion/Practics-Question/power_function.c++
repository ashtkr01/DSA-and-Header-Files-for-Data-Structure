#include<bits/stdc++.h>
using namespace std;
/***************************OPtimized Version********************************/
int pow_fun_optimized(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b%2==0)
    {
        return pow(pow_fun_optimized(a,b/2),2);
    }
    else if(b%2!=0)
    {
        return a*pow(pow_fun_optimized(a,b/2),2);
    }
}
/***************************Power function***********************************/
int pow_fun(int a , int b)
{
    if(b==0)
    {
        return 1;
    }
    return a*pow_fun(a,b-1);
}

int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    cout<<pow_fun(a,b)<<endl;
    cout<<pow_fun_optimized(a,b)<<endl;
    return 0;
}
