#include<bits/stdc++.h>
using namespace std;

void clearIthBit(int &n, int i)
{
    int mask=~(1<<i);
    n = n & mask;
}
/******************************Main Function***************************************/
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    cout<<"Which bit you want to clear "<<endl;
    int n;
    cin>>n;
    clearIthBit(num,n);
    cout<<"Answer : "<<num<<endl;
    return 0;
}
