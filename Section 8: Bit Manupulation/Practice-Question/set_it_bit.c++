#include<bits/stdc++.h>
using namespace std;

void setIthBit(int &n, int i)
{
    int mask=1<<i;
    n = n | mask;
}
/******************************Main Function***************************************/
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    cout<<"Which bit you want to set "<<endl;
    int n;
    cin>>n;
    setIthBit(num,n);
    cout<<"Answer : "<<num<<endl;
    return 0;
}
