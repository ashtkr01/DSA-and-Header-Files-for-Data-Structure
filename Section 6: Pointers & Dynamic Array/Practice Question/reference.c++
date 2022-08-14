#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x=10;
    int &y=x;
    y++;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
