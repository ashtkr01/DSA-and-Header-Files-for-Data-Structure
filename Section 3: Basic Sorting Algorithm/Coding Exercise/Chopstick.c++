#include<bits/stdc++.h>
using namespace std;

bool compare(int x,int y)
{
    return x<y;
}
/******************************First Method*******************************/
int pairStick_2(vector<int> vctr , int d)
{
    int count = 0;
    sort(vctr.begin() , vctr.end() , compare);
    for(int i=0;i<vctr.size();i++)
    {
        if(vctr[i] <= vctr[i+1])
        {
            count++;
            i++;
        }
        
    }
    return count;
}
/*******************************Second Method***************************************************/
int pairSticks(vector<int> length, int D)
{
    // your code goes here
    sort(length.begin(),length.end(),compare);
    unordered_set<int> st;
    int count=0;
    
    for(int i=0;i<length.size();)
    {  
        j=i+1;
        while(i<j)
        {

        if(length[j]-length[i]<=D and st.find(i) == st.end())
        {
            st.insert(j);
            count++;
            i++;
            j++;
            
        }
        i++;
        }
    }
}