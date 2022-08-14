#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    int size = A.size();
    for (int i = 0; i < size; i++)
    {
        currSum += A[i];
        if(currSum>maxSum)
        {
            maxSum=currSum;
        }
        if(currSum<0)
        {
            currSum=0;
        }
    }
    return maxSum;

}
/*****************************Main Function*******************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{-2,3,4,-1,5,-12,6,1,3};
    cout<<maxSumSubarray(vctr)<<endl;
    return 0;
}
