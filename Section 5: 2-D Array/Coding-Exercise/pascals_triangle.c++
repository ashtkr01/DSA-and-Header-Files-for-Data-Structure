#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    // your code goes here
    vector<vector<int> > vctr(n);

    if(n>=1)
    {
        vctr[0].push_back(1);
    }
    if(n>=2)
    {
        vctr[1].push_back(1);
        vctr[1].push_back(1);
    }
    if(n>=3)
    {
        for(int i=2;i<n;i++)
        {
           vctr[i].push_back(1);
           int size=vctr[i-1].size();
           for(int k=0;k<size-1;k++)
           {
               int num=vctr[i-1][k]+vctr[i-1][k+1];
               vctr[i].push_back(num);
           }
           vctr[i].push_back(1);
        }
    }

    return vctr;
    
}

/*******************************Main Function************************************/
int main(int argc, char const *argv[])
{
    int n;
    // cout<<"Hi"<<endl;
    cin>>n;
    vector<vector<int>> vctr;
    vctr=printPascal(n);

// cout<<"Hi"<<endl;
    //Print the vector
    for(auto x:vctr)
    {
        for(auto y: x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}

 



