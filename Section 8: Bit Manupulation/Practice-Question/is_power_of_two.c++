#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    /****************************Case 1***************************************/
    /*
    if((n&(n-1))==0)
    {
        cout<<"Power of 2 "<<endl;
    }
    else{
        cout<<"Not power of 2 "<<endl;
    }
    */
   if(x && (!(x&(x-1))))
   {
       cout<<"Power of two :"<<endl;
   }
   else{
       cout<<"Not a power of 2 "<<endl;
   }

    return 0;
}
