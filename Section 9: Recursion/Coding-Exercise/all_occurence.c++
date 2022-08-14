#include <bits/stdc++.h>
using namespace std;

vector<int> all_occurence(vector<int> v, int key , int i, int j)
{
    vector<int> vctr;
    if(v[i]==v[j])
    {
        return vctr;
    }
    if(v[i]==key)
    {
        vctr.push_back(i);
    }
    vector<int> vctr1= all_occurence(v,key,i+1,j);
    vctr.insert(vctr.end(),vctr1.begin(),vctr1.end());
    return vctr;
}

vector<int> findAllOccurences(int k, vector<int> v){
     vector<int> vctr;
     vctr=all_occurence(v,k,0,v.size());
     return vctr;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> v;
    vector<int> vctr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    vctr= findAllOccurences(key,v);
    cout<<vctr.size()<<endl;
    for(auto x: vctr)
    {
        cout<<x<<" "<<endl;
    }
    return 0;
}
