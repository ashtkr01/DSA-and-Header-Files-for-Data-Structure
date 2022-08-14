#include <bits/stdc++.h>
using namespace std;
/******************PrefixSum Approach*********************************************/
int maximumSubArraySum(int *arr, int n)
{ 
    //prefixSum array build
    int prefix[n] = {0};
    int currSumSubarray=0;
    int maxSumSubarray=INT_MIN;
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        currSumSubarray=0;
        for (int j = i; j < n; j++)
        {
            if (i > 0){

                currSumSubarray = prefix[j] - prefix[i - 1];
            }
            else{
                currSumSubarray = prefix[j];
            }
        maxSumSubarray=max(currSumSubarray,maxSumSubarray);
        }
        
    } 
    return maxSumSubarray;
}
/****************************Main Function*********************************/
int main(int argc, char const *argv[])
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int size = sizeof(arr) / sizeof(int);
  cout<<maximumSubArraySum(arr,  size)<<endl;

    return 0;
}
