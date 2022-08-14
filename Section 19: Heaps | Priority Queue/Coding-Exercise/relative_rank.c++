#include<bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    // your code goes here
    int n = score.size();
    vector<string> vctr(n);
    priority_queue<int> heaps;
    unordered_map<int , int> mp;

    //traversing a vector:
    for(int i=0;i<score.size();i++)
    {
        int element=score[i];
        heaps.push(score[i]);
        mp[element] = i;
    }

    int key=0;
    while(!heaps.empty())
    {
        int ele = heaps.top();
        if(key == 0)
        {
            vctr[mp[ele]]= "Gold Medal";
        }
        else if(key==1)
        {
             vctr[mp[ele]]= "Silver Medal";
           
        }
        else if(key==2)
        {
            vctr[mp[ele]]= "Bronze Medal";
        }
        else{
            vctr[mp[ele]]= to_string(key+1);
        }
        heaps.pop();
        key++;
    }
    return vctr;
}
//Main Function:
int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    vector<string> vctr;
    vector<int> score(size,0);
    for(int i=0;i<size;i++)
    {
        cin>>score[i];
    }
     
     //Call to the main function:
     vctr = findRelativeRanks(score);
     //Print the vector:
     for(auto x: vctr)
     {
         cout<<x<<"     ";
     }
     cout<<endl;
    return 0;
}


