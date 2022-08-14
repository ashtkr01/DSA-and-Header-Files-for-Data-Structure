#include <iostream>
using namespace std;
 
 
int power(int x, int y, int mod)
{
    int res =1;
    // your code goes here
    for(int i=1;i<=y;i++)
    {
        res = (res*x)%mod;
    }
    return res;
}
//Second Approach:
int power_eff(int x , int y ,int mod)
{
     if(y==0)
     {
         return 1;
     }
     int res=x;
     y=y>>1;
     while(y>0)
     {
         if((y&1)==1)
         {
              x=(x*x)%mod;
             res=(res*x)%mod;
             y=y>>1;
         }
         else{
             x=(x*x)%mod;
             y=y>>1;
         }
     }
     return res;
}
//Main Function:
int main(int argc, char const *argv[])
{
    int x , y , mod;
    cin>>x>>y>>mod;
    cout<<power(x , y, mod)<<endl;
    cout<<power_eff(x , y, mod)<<endl;
    return 0;
}
