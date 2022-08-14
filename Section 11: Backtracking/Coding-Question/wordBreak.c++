#include <bits/stdc++.h>
using namespace std;
int ct = 0;
//Helper function:
void helper(string str , string res , unordered_map<string , int> um)
{
    // cout<<str<<endl;
    if(str.length() == 0)
    {
        // cout<<"Hi"<<endl;
        ct++;
        return;
    }
    for(int i = 0;i<str.length();i++)
    {
        string substring =  str.substr(0,i+1);
        if(um.find(substring) != um.end() and (um[substring] >= 1))
        {
          string s = substring;
            // cout<<s<<endl;
          string newstr = str.substr(i+1);
        //   cout<<newstr<<endl;
          um[s]--;
          helper(newstr , res + s , um );
          um[s]++;
         }
    }
}
int wordBreak(string str, vector<string> &dictionary){
     unordered_map<string , int> um;
     for(auto x : dictionary)
     {
         um[x]++;
     }	
     string res ="";
    //  for(auto x : um)
    //  {
    //      cout<<x.first<<"  "<<x.second<<endl;
    //  }
    //  cout<<str.length()<<endl;
    //  cout<<str.substr(0 , 3)<<endl;
    //  cout<<str.substr(18)<<endl;
     helper( str , res ,  um);
     return ct;
}

//Main:
int main(int argc, char const *argv[])
{
    vector<string> dictionary = { "i","one", "naruto","piece", "love", "and", "onepiece" , "onepieceandnaruto"};
    // string str = "ilikesamsungmobile";
    string str = "iloveonepieceandnaruto";
    cout<<wordBreak(str , dictionary)<<endl;
    return 0;
}
