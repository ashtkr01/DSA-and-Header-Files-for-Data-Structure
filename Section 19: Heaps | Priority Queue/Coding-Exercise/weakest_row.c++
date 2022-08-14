#include<bits/stdc++.h>
using namespace std;

/************************Approach-1***************************************/
vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    // your code goes here 
    vector<int> vctr;
     priority_queue<int ,vector<int> , greater<int> > heap;

     

     int count_one =0;
    for(int i=0;i<mat.size();i++)
    {
        count_one=0;

        for(int j=0;j<mat[i].size();j++)
        {
            if(mat[i][j]==1)
            {
                count_one++;
            }
        }
        int ele = (count_one * 1000) + i;
          heap.push(ele);
    }

    while(!heap.empty() and k--)
    {
        int ele = heap.top();
        ele = ele %1000;
        vctr.push_back(ele);
        heap.pop();
    }
    return vctr;
}
 
 //Main fUNCTION
 int main(int argc, char const *argv[])
 {
     int m , n;
     cin>>m>>n;
     vector<int> rvctr;
     vector<vector<int> > vctr(m , vector<int > (n ,0));
     //Initialization of 2-D Vector:
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>vctr[i][j];
         }
     }
     int key;
     cout<<"Enter key"<<endl;
     cin>>key;
     
     rvctr = kWeakestRows(vctr , key);
     //Print a vector:
     for(auto x : rvctr)
     {
         cout<<x<<" ";
     }
     cout<<endl;
     return 0;
 }
 
