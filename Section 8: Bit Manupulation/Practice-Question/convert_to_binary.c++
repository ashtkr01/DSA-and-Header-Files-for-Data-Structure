#include<bits/stdc++.h>
using namespace std;
/******************************Convert  To Binary **************************************/
int convertToBinary(int n)
{
    int power=0;
    int answer=0;
    while(n>0)
    {
        if(n&1)
        {
        answer = answer+pow(10,power);
     }
     power++;
     n=n>>1;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<"Answer is :"<<convertToBinary(n)<<endl;
    return 0;
}
