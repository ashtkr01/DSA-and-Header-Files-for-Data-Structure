#include<bits/stdc++.h>
using namespace std;


int longestSubarrayKSum(vector<int> arr,int k){
    // your code goes here
    unordered_map<int , pair<int,int >> um;
    int size = arr.size();
    //Prefix sum array:
    for(int i=1;i<size;i++)
    {
        arr[i] +=arr[i-1];
    }
    //Initialization of unordered_map:
    for(int i=0;i<size;i++)
    {
        if(um.count(arr[i]) == 0)
        {
          um[arr[i]].first = i;
          um[arr[i]].second = i;
        }
        else{
            um[arr[i]].second = i;
        }
    }

    //Print un_ordered map:
    for(auto x: um)
    {
        cout<<x.first<<" -->";
        cout<<x.second.first<<" , " <<x.second.second;
        cout<<endl;
    }

     int curr_size = 0;
     int max_size = 0;
    for(int i=0;i<size;i++)
    {
        //First way:
        if(arr[i] == k)
        {
             int idx = i;
          curr_size = idx + 1;
          max_size=max(curr_size , max_size);
        }
        //2nd Possiblity :
        int element = k+arr[i];
        if(um.count(element) != 0)
        {
          int idx = um[element].second;
          curr_size = idx - i;
          max_size=max(curr_size , max_size);
        }
    }

    return max_size;
}

//Main Function:
int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    int key;
    cin>>key;
    vector<int> vctr(size , 0);
    for(int i=0;i<size ; i++)
    {
        cin>>vctr[i];
    }
    //Call to functon:
    cout<<longestSubarrayKSum(vctr , key)<<endl;
    return 0;
}

