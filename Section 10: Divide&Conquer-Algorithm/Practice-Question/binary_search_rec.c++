#include <bits/stdc++.h>
using namespace std;
  //Recursive function:
  int binary_search(vector<int> vctr,int low,int high , int data)
  {
      if(low >high)
      {
          return -1;
      }
      int mid=(high + low)/2;
      if(vctr[mid]==data)
      {
          return mid;
      }
      else if(vctr[mid]>data)
      {
          return binary_search(vctr , low, mid-1 , data);
      }
      else if(data > vctr[mid])
      {
          return binary_search(vctr , mid+1 , high , data);
      }
  }
int binarySearch(vector<int> v, int x)
{
    // your code goes here
    int size=v.size()-1;
    return binary_search(v,0,size,x);
}

int main(int argc, char const *argv[])
{
    int n;
    vector<int> vctr={1,3,5,7,9};
    cin>>n;
    cout<<binarySearch(vctr , n)<<endl;
    return 0;
}
