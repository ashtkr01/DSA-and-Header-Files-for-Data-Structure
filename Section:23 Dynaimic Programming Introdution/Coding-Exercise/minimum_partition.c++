#include <bits/stdc++.h>
using namespace std;
//Call to the main function: REcursive approach
int minimumDiff(vector<int> arr , int i , int j  , int sum1 , int sum2 , int& minSum)
{
    if(i == j)
    {
        minSum = min(minSum , abs(sum1 - sum2));
        return minSum;
    }

    int ans = INT_MAX;
    ans = min( ans , minimumDiff(arr , i +1 , j , sum1 + arr[i] , sum2 , minSum));
    ans = min(ans , minimumDiff( arr , i +1 , j , sum1 , sum2 + arr[i] , minSum));
   return ans;
}
  
int findMin(vector<int> arr)
{
    // your code goes here
int minSum = INT_MAX;
    int sum1 = 0;
    int sum2 = 0;
    int j = arr.size();
    int i=0;

    //Call
    return minimumDiff( arr , i , j , sum1 , sum2 , minSum);
    
}
//Main:
int main(int argc, char const *argv[])
{
    vector<int> vctr{ 1 , 4 , 11 , 3};
    //Call:
    cout<<findMin(vctr)<<endl;
    return 0;
}
