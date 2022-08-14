#include<bits/stdc++.h>
using namespace std;

void clearBitsRange(int &m, int i, int j)
{
    int a=(~0)<<i+1;
    int b=(1<<j)-1;
    int mask=a|b;
    m=m & mask;
}
/**********************Replace bit of n in m at between the given index**************************/
void replaceBits(int &m, int &n, int i ,int j)
{
   //Clear the bits in range i - j in m:
    clearBitsRange(m,i,j);
    int mask= n<<j;
    m=m | mask;
}

int main(int argc, char const *argv[])
{
    cout<<"Enter the value of m"<<endl;
    int m;
    cin>>m;
    cout<<"Enter the value of n "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the range "<<endl;
    int i , j;
    cin>>i>>j;
    replaceBits(m,n,i,j);
    cout<<"Anser : "<<m<<endl;

    return 0;
}
