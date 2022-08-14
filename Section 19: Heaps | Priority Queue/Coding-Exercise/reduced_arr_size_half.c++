
#include <bits/stdc++.h>
using namespace std;

int minSetSize(vector<int> &arr)
{
    // your code goes here
    priority_queue<int> q;
    unordered_map<int ,int > mp;
    int result = 0;

    //Traverse the vector:
    int size = arr.size();
    for(int i=0;i<size ; i++)
    {
        mp[arr[i]]++;
    }
     
     int total_size=0;
    for(auto x : mp)
    {
        q.push(x.second);
        total_size = x.second + total_size;
    }

    while(total_size > size/2)
    {
        int ele = q.top();
        total_size = total_size - ele;
        result++;
        q.pop();
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    vector<int> vctr(size , 0);
    //INitialize the vector:
    for(int i=0;i<size;i++)
    {
        cin>>vctr[i];
    }
    //Call to function:
    cout<<minSetSize(vctr)<<endl;
    return 0;
}

