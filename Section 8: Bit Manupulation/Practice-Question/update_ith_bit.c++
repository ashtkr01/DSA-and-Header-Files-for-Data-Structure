#include<bits/stdc++.h>
using namespace std;

void updateIthBit(int &n, int i, int bit)
{
    //Clear the ith bit
    int mask=~(1<<i);
    n=n & mask;

    if(bit==1)
    {
        mask=1<<i;
        n=n | mask;
        return;
    }
    else if(bit==0)
    {
        return;
    }
}
/******************************Main Function***************************************/
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    cout<<"Which bit you want to updat "<<endl;
    int n;
    cin>>n;
    cout<<"Value by which you want to update that bit i.e., 1 or 0 "<<endl;
    int bit;
    cin>>bit;
    updateIthBit(num,n,bit);
    cout<<"Answer : "<<num<<endl;
    return 0;
}