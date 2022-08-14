#include<bits/stdc++.h>
using namespace std;

void clearLastIBit(int &n, int i)
{
    int mask=(~0)<<i;
    n = n & mask;
}
/******************************Main Function***************************************/
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    cout<<"Upto Which bit you want to clear "<<endl;
    int n;
    cin>>n;
    clearLastIBit(num,n);
    cout<<"Answer : "<<num<<endl;
    return 0;
}
