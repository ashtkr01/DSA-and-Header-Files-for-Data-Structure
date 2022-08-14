#include <bits/stdc++.h>
using namespace std;

int friendsPairing(int n){
    if(n<=0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    return ((n-1)*friendsPairing(n-2)) + (friendsPairing(n-1));
}

int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    cout<<friendsPairing(num)<<endl;

    return 0;
}
