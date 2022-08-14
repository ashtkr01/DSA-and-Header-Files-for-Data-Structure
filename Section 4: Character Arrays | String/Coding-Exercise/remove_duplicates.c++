#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    // your code goes here
    set<char> os;
    int length=s.length();
    for(int i=0;i<length;i++)
    {
        os.insert(s[i]);
    }
    s="";
    for(auto x:os)
    {
        s +=x;
    }
    return s;
    
}
/*********************************Main Function************************************/
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    cout<<removeDuplicate(s)<<endl;
    return 0;
}
