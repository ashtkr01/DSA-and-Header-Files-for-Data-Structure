#include <bits/stdc++.h>
using namespace std;
 //Function to return the reverse stack as a number:
 void stackreverse(stack<int> st , int &res)
 {
     if(st.empty())
     {
         return;
     }
     int a=st.top();
     st.pop();
     stackreverse(st, res);
     res = (res*10)+a;
 }
int reverse(int n){
	int a=n;
    stack<int> st;
    while(a>0)
    { 
        int b=a%10;
        st.push(b);
        a=a/10;
    }
     int res=0;
stackreverse(st , res) ;
return res;
    //Jai Shree Radhe
}
//Main Function:
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int no_of_digit = reverse(n);
    cout<<no_of_digit<<endl;
    return 0;
}
