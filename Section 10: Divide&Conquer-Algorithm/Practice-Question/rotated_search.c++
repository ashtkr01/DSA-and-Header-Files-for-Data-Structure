#include<bits/stdc++.h>
using namespace std;
//Binary search on rotated array
int binarySearch(vector<int> vctr , int low , int high , int data)
{
    int mid=(low+high)/2;
    if(vctr[mid]==data)
    {
        return mid;
    }
    //Lies in left part
    if(vctr[low] < vctr[mid])
    {
        if(data >= vctr[low] and data < vctr[mid] )
        {
            return binarySearch(vctr , low , mid-1 , data);
        }
        else{
            return binarySearch(vctr , mid+1 , high , data);
        }
    }
    else if(vctr[low] > vctr[mid])
    {
        if(data > vctr[mid] and data<=vctr[high])
        {
            return binarySearch(vctr , mid+1, high , data);
        }
        else{
            return binarySearch(vctr , low , mid-1 , data);
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Size :"<<endl;
    cin>>n;
    int data;
    cout<<"Data to be searched "<<endl;
    cin>>data;
    vector<int> vctr;
    //Insert elements in an array:
    for(int i=0;i<n;i++)
    {
    int ele;
    cin>>ele;
    vctr.push_back(ele);
    }

    cout<<binarySearch(vctr , 0 ,n-1 ,data)<<endl;
    return 0;
}
