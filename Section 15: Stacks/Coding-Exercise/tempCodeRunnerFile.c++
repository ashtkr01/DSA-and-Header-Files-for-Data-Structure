#include<bits/stdc++.h>
using namespace std;
 
int getMaxArea(vector<int> hist){
    stack<int> st;
    int size=hist.size();
   int i=0;
   int max_area=INT_MIN;
   int curr_area= 0;

   while(i<size)
   {
     if((st.empty()) or (hist[st.top()] < hist[i]))
     {
         st.push(i);
         i++;
     }
      else {
          int curr_index=st.top();
          st.pop();
          if(!st.empty())
          {
          curr_area=hist[curr_index] * (i-st.top() -1);
          }
          else{
             curr_area=hist[curr_index] * (i);  
          }
          max_area=max(curr_area , max_area);
          
      }
      
   }

   while(!st.empty())
   {
      int curr_index=st.top();
          st.pop();
          if(!st.empty())
          {
          curr_area=hist[curr_index] * (i-st.top() -1);
          }
          else{
             curr_area=hist[curr_index] * (i );  
          }
          max_area=max(curr_area , max_area);
   }
   return max_area;
}
//Main Function:
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> vctr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>vctr[i];
    }
    cout<<getMaxArea(vctr)<<endl;
    return 0;
}

