#include<bits/stdc++.h>
using namespace std;

bool duplicateParentheses(string str){
     stack<char> st;
     bool res=false;
     int length = str.length();
     int count=0;

    for(int i=0;i<length ; i++)
    {
        if(str[i]=='(' and str[i+1]=='(')
        {
            res=true;
           st.push('(');
           st.push('(');
           i++;
        }
        else if(str[i]=='(' and str[i+1] != '(')
        {
            count++;
        }
        else if(count != 0 and str[i]==')')
        {
            count--;
        }
        else if(str[i] == ')' and str[i+1] == ')')
        {
            st.pop();
            st.pop();
        }
    }
    if(st.empty())
    {
        return true and res;
    }
    else{
        return false;
    }
}
//Main Function
int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    cout<<duplicateParentheses(str)<<endl;
    return 0;
}
