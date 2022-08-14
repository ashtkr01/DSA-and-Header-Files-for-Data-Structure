#include<bits/stdc++.h>
#include <string>
using namespace std;
 
int binaryToDecimal(string s)
{
    // your code goes here
    int val=0;
    int length=s.length();
    int power=-1;
    for(int i=length-1;i>=0;i--)
    {
        char a=s[i];
        if(a=='1')
        {
            val+=1*pow(2,++power);
        }
        else if(a=='0')
        {
            val+=0*pow(2,++power);
        }
    }
    return val;
}
 
 int main(int argc, char const *argv[])
 {
     string s;
     cin>>s;
     cout<<binaryToDecimal(s)<<endl;
     return 0;
 }
 