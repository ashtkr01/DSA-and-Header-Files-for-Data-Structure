#include<bits/stdc++.h>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
    // your code goes here 
    vector<int> vctr; 
    unordered_set<int> st1;
    unordered_set<int> st2;

    int size1= nums1.size();
    int size2 = nums2.size();
     //Initialization of set-1
    for(int i=0;i<size1;i++)
    {
        st1.insert(nums1[i]);
    }
    //Initialization of set-2
    for(int i=0;i<size2;i++)
    {
        st2.insert(nums2[i]);
    }

    for(auto x : st1)
    {
        if(st2.find(x) != st2.end())
        {
            vctr.push_back(x);
        }
    }
    sort(vctr.begin() , vctr.end());
    return vctr;
}
//main
int main(int argc, char const *argv[])
{
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};
    vector<int> vctr;

    vctr = intersection(nums1 , nums2);

    //Print array:
    for(auto x: vctr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

