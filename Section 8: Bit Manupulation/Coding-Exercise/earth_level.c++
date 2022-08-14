#include<bits/stdc++.h>
using namespace std;

int earthLevel(int k)
{
    //your code goes here
    int val=1;
    int count=0;
    while(val!=k)
    {
       val=val*2;
       if(val > k)
       {
           val=val/2;
           count++;
           int temp=val;
           val=1;
           k=k-temp;
       }

    }
    count++;
   
    return count;
}
//Main
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    cout<<earthLevel(num)<<endl;
    return 0;
}
