#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    vector<int> vctr;
    int i=0;
    int j=n-1;
    while(j>=0)
    {
       while(i<m)
       {
           vctr.push_back(arr[i][j]);
           i++;
       } 
       i=m-1;
       j--;
       while(i>=0)
       {
          vctr.push_back(arr[i][j]);
          i--; 
       }
       j--;
       i=0;
    }
    return vctr;
}

/***************************************Main Function**********************************/
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{{1,2,3,4},
                           {5,6,7,8},
                         {9,10,11,12},
                         {13,14,15,16}};
    vector<int> vctr;
    vctr=WavePrint(4,4,arr);
    //Print the vector
    for(auto x: vctr)
    {
        cout<<x<<"  ";
    }                     
    return 0;
}

