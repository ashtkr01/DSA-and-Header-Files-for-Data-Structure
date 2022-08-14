#include<bits/stdc++.h>
using namespace std;

/***************************Udemy Code given By Prateek***********************************/
int first_occurrence(int *arr , int n, int ele)
{
    //Base case 
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==ele)
    {
        return 0;
    }
    int subIndex=first_occurrence(arr+1,n+1,ele);
    if(subIndex!=-1)
    {
        return 1+subIndex;
    }
        return -1;

}

int firstOccurrence(int *arr , int ele , int n,int size)
{
    if(n==0 or n<0)
    {
        return -1;
    }
    if(arr[0]==ele)
    {
        return size-n;
    }
    return firstOccurrence(arr+1,ele,n-1,size);
}

/**************************2nd method given by prateek Bhaiya**********************************/
int firstOccurrenceSecond(int arr[],int ele,int n,int size)
{
    if(n<=0)
    {
        return -(size+1);
    }
    else if(arr[0]==ele)
    {
        return 0;
    }
    else{

    return 1 + (firstOccurrenceSecond(arr+1,ele,n-1,size));
    }
}

int main(int argc, char const *argv[])
{   
    cout<<"Enter the number of elements "<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the element to be searched "<<endl;
    int a;
    cin>>a;
    cout<<"Enter elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"At index : "<<firstOccurrenceSecond(arr,a,n,n)<<endl;
    cout<<"At index "<<firstOccurrence(arr,a,n,n)<<endl;
    cout<<"At index "<<first_occurrence(arr,n,a)<<endl;
    return 0;
}
