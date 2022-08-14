#include<bits/stdc++.h>
using namespace std;

/**************************************By Prateek Bhaiya******************************************/
bool isSortedArray(int arr[],int n)
{
    //Base case
    if(n==1 or n==0)
    {
        return true;
    }
    //Recursive Case
    if(arr[0]<arr[1] and isSortedArray(arr+1,n-1))
    {
        return true;
    }
    return false;
}

/*************************************2nd way given by Prateek Bhaiya*********************************/
bool isSortedArrayTwo(int arr[],int i, int n)
{
    //Base case
    if(i==n-1)
    {
        return true;
    }
    // Recursive case
    if(arr[i]<arr[i+1] and isSortedArrayTwo(arr,i+1,n))
    {
        return true;
    }
    return false;
}
/**********************************Given By Myself******************************************/
void isSorted(int *a,int c,int n)
{
    if(c+1==n)
    {
        cout<<"Yes it is sorted "<<endl;
        return;
    }
    else if(a[0]<a[1])
    {
        
        return isSorted(a+1, c+1, n);
    }
    else if(a[0]>a[1])
    {
        cout<<"Not Sorted "<<endl;
        return;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    isSorted(a,0,n);
    cout<<isSortedArray(a,n)<<endl;
    cout<<isSortedArrayTwo(a,0,n)<<endl;
    return 0;
}
