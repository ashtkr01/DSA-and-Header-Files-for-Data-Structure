#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest_no = INT_MIN;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest_no)
        {
            largest_no = arr[i];
        }
    }
    return largest_no;
}
/********************************Main Function***********************************/
int main(int argc, char const *argv[])
{
    vector<int> arr{1,2,5,4,3,8,7,6};
    cout<<largestElement(arr)<<endl;
    return 0;
}
