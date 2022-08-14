#include<bits/stdc++.h>
using namespace std;
/************************************In O(n) times*****************************/
// Link to this solution: https://www.geeksforgeeks.org/given-sorted-array-number-x-find-pair-array-whose-sum-closest-x/
pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    pair<int,int> pr;
    int a=0;
    int b=arr.size()-1;
    int diff=0;

    int min_diff=INT_MAX;
    while(a<=b)
    {
       diff=abs(arr[a]+arr[b]-x);
       if(arr[a]+arr[b]>x)
       {
            if(diff<min_diff)
       {
         pr.first=arr[a];
         pr.second=arr[b];
         min_diff=diff;
       }
           b--;
       }
       else if(arr[a]+arr[b] <x)
       {
           if(diff<min_diff)
       {
         pr.first=arr[a];
         pr.second=arr[b];
         min_diff=diff;
       }
           a++;
       }
      

    }
    return pr;
}
/**************************************Main Function************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{10,22,28,29,30,40};
    int x=54;
    pair<int,int> pr;
    pr=closestSum(vctr,x);
    cout<<pr.first<<endl;
    cout<<pr.second<<endl;
    return 0;
}
