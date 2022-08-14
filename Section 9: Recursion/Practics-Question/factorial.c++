#include<bits/stdc++.h>
using namespace std;

/**************************Function to find the factorial*****************************/
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
     
     return n*fact(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is :"<<fact(n)<<endl;
    return 0;
}
