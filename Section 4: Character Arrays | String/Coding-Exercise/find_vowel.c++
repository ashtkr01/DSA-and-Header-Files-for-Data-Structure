#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    // your code goes here
    int length=S.length();
    int j=0;
    for(int i=0;i<length;i++)
    {
        if(S[i]=='a' or S[i]=='e' or S[i]=='i' or S[i]=='o' or S[i]=='u' )
        {
            S[j]=S[i];
            j++;
        }

    }
    S=S.substr(0,j);
    // cout<<S<<endl;
    return S;
} 

int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    cout<<vowel(str)<<endl;
    return 0;
}
