#include<bits/stdc++.h>
using namespace std;

vector<int> increasingNumbers(int N) {
    vector<int> vctr;
    if(N==0)
    {
        return vctr;
    }
     vctr=increasingNumbers(N-1);
    vctr.push_back(N);
    // vctr1.insert(vctr1.end(), vctr.begin(), vctr.end());

    return vctr; 
}


int main(int argc, char const *argv[])
{   
    int n;
    cin>>n;
    vector<int> vctr = increasingNumbers(n);

    /* code */
    //Print
    for(auto x: vctr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
