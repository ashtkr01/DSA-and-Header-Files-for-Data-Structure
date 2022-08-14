#include<bits/stdc++.h>
using namespace std;
/*******************************First Approach************************************/
int get_i_th_bit(int n, int i)
{
   int ans=(n>>i)&1;
   return ans;
}

/******************************Second Approach**************************************/
int getIthBit(int n, int i)
{
    int mask=1<<i;
    return (n & mask)>0 ? 1:0;
}
/******************************Main Function***************************************/
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    cout<<"Which bit you want to get "<<endl;
    int n;
    cin>>n;
    cout<<"I th bit is :"<<get_i_th_bit(num,n)<<endl;
    cout<<"I th bit is :"<<getIthBit(num,n)<<endl;
    return 0;
}
