#include<bits/stdc++.h>
using namespace std;
//Rotated Search :
int rotatedSearch(vector<int> vctr , int ele)
{
    int high = vctr.size() - 1;
    cout<<high<<endl;
    int low = 0;
    while(low <= high)
    {
        int mid = (low + high)/2;

        if(vctr[mid] == ele)
        {
            return mid;
        }

        if(vctr[mid] < ele and ele <= vctr[high])
        {
            low = mid+1;
        }
        else if(vctr[mid] < ele and ele > vctr[high])
        {
            high = mid-1;
        }
        else if(vctr[mid] > ele and ele < vctr[low])
        {
            low = mid + 1;
        }
        else if(vctr[mid] > ele and ele >= vctr[low])
        {
            high = mid - 1;
        }



    }
    return -1;
}
int main(int argc, char const *argv[])
{
    vector<int> vctr = { 5 , 6 , 7 , 8 , 1 , 2 , 3 , 4 };
    int ele;
    cin>>ele;
    cout<<"Answer :"<<rotatedSearch(vctr , ele)<<endl;
    return 0;
}
