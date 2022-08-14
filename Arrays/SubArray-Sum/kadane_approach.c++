#include<bits/stdc++.h>
using namespace std;

/*************************************Kadane Algorithm****************************/
int maxSumSubArray(int * arr,int n)
{
    int currSum=0;
    int maxSum=INT_MIN;
     for(int i=0;i<n;i++)
     {
         currSum += arr[i];

         if(currSum > maxSum)
         {
             maxSum=currSum;
         }
         if(currSum < 0)
         {
             currSum=0;
         }
     }
     return maxSum;
}
/***************************************Main Function***********************************/
int main(int argc, char const *argv[])
{
    // int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int arr[]={-2,-3,-4,-1,-5,-12,-6,-1,-3};
    int size=sizeof(arr)/sizeof(int);
    cout<<maxSumSubArray(arr,size)<<endl;
    return 0;
}
