#include<bits/stdc++.h>
using namespace std;
/*************************************First Approach***********************************/
int last_occurrence(int *arr , int n, int ele)
{  
    //base case
   if(n==0)
   {
       return -1;
   }
   int subIndex=last_occurrence(arr+1, n-1, ele);
   if(subIndex==-1)
   {
       if(arr[0]==ele)
       {
           return 0;
       }
       else{
           return -1;
       }
   }
   return 1+subIndex;
}
/***************************************Second Approach***************************************/
void lastOccurrence(int *arr , int ele , int n,int size ,int &ans)
{
    if(n==0 or n<0)
    {
        ans=-1;
       return;
    }
   
    lastOccurrence(arr+1,ele,n-1, size ,ans);
     if(arr[0]==ele and ans == -1)
    {
        ans=size-n;
        return ;
    }
}

int main(int argc, char const *argv[])
{   
    int ans=0;
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
    lastOccurrence(arr,a,n,n,ans);
    cout<<"At index "<<ans<<endl;
    cout<<last_occurrence(arr , n ,a)<<endl;
    return 0;
}
