#include<bits/stdc++.h>
using namespace std;
/********************************Fast Exponentiation************************************/
int fastExponentiation(int a, int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1==1)
        {
            ans *=a;
        }
            b=b>>1;
    a=a*a;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int a , b;
    cin>>a>>b;
    cout<<"Answer :"<<fastExponentiation(a,b)<<endl;
    return 0;
}
