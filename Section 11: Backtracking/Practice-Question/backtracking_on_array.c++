#include<bits/stdc++.h>
using namespace std;
/****************************Print the Array***********************************/
void printArray(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
/********************************Initialize the arrar*******************************/
void fillArray(int *arr , int i ,int n, int value)
{
    //Base Case
    if(i==n)
    {
        printArray(arr,n);
        return;
    }
    arr[i]=value;
    fillArray(arr,i+1,n,value+1);
    //Backtracking:
    arr[i]=-1*arr[i];
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int *arr= new int[n];
    fillArray(arr,0,n,1);
    printArray(arr,n);
    return 0;
}
