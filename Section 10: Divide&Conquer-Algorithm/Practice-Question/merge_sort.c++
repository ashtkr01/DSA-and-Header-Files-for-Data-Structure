#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &vctr , int s , int e)
{
    vector<int> v;
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    while(i<=mid and j<=e)
    {
        if(vctr[i]<vctr[j])
        {
            v.push_back(vctr[i]);
            i++;
        }
        else {
            v.push_back(vctr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        v.push_back(vctr[i]);
        i++;

    }
    while(j<=e)
    {
        v.push_back(vctr[j]);
        j++;
    }
    
    //Cpy the vector in original vector
    int l=0;
    for(int k=s;k<=e;k++)
    {
        vctr[k]=v[l];
        l++;
    }
}
void mergeSort(vector<int> &vctr , int s , int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergeSort(vctr, s, mid);
    mergeSort(vctr, mid+1, e);
    merge(vctr,s,e);
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> vctr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>vctr[i];
    }

    mergeSort(vctr,0,n-1);

    //Print
    for(auto x: vctr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
