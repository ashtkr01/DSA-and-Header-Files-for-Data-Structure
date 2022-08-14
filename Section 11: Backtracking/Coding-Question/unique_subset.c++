#include <bits/stdc++.h>
using namespace std;
//Helper Function:
void helper(vector<int> nums , int m, int n , set<vector<int>> &st , vector<int> res)
{
    if(m == n)
    {
        sort(res.begin() , res.end());
        st.insert(res);
        return;
    }

    //Include the first element:
    res.push_back(nums[m]);
    helper(nums , m+1 , n , st , res);
    res.pop_back();
    helper(nums , m+1 , n , st , res);

}
vector<vector<int>> uniqueSubsets(vector<int> nums){
    set<vector<int>> st;
    int n = nums.size();
    vector<vector<int>> vctr;
    vector<int> res;
    int m = 0;
    helper(nums ,m , n ,st , res);
    for(auto x : st)
    {
        vctr.push_back(x);
    }
    return vctr;
}

//Main:
int main(int argc, char const *argv[])
{
    vector<int> vctr = {1,2,2};
    vector<vector<int>> res;
    res = uniqueSubsets(vctr);
    //Print the resultant vector:
    for(auto x : res)
    {
        for(auto y : x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
