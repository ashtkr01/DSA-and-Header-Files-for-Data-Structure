#include<bits/stdc++.h>
using namespace std;

void direct(int num)
{
    if(num==0)
    {
        cout<<endl;
        return;
    }
    //Toward the base case
    cout<<num<<" ";
    direct(num-1);
    //Toward the main function
    cout<<num<<" ";
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    direct(n);
    return 0;
}
