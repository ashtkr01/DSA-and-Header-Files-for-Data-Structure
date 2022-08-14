#include <bits/stdc++.h>
using namespace std;

vector<string> binaryStrings(int n){
    // do not modify any default function or parameter you can use helper function if needed
    vector<string> vctr;
    if(n==0)
    {
        return vctr;
    }
    else if(n==1)
    {
        vctr.push_back("0");
        vctr.push_back("1");
        return vctr;
    }

    vector<string> vctr1= binaryStrings(n-1);
    for(int i=0;i<vctr1.size();i++)
    {
        if(vctr1[i][0]=='0')
        {
          
              vctr.push_back("0" + vctr1[i]);
              vctr.push_back("1" + vctr1[i]);
        }
        else if(vctr1[i][0]=='1')
        {
             vctr.push_back("0" + vctr1[i]);
        }
    }
    sort(vctr.begin(),vctr.end());
    return vctr;

}

int main(int argc, char const *argv[])
{
    
    int n;
    cin>>n;
    vector<string> vctr;
    vctr=binaryStrings(n);
    cout<<vctr.size()<<endl;
    //Print
    for(auto x : vctr)
    {
        cout<<x<<endl;
    }
    return 0;
}
