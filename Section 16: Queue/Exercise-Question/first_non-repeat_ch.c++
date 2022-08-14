#include <bits/stdc++.h>
using namespace std;

vector<char> firstnonrepeating(vector<char> str){
    queue<char> st;
    unordered_set<char> sets;
    int size = str.size();
    for(int i=0;i<size;i++)
    {
      if(st.empty() and (sets.find(str[i]) == sets.end() ))
      {
          st.push(str[i]);
          sets.insert(str[i]);
          
      }
       else if(st.empty() and (sets.find(str[i]) != sets.end()))
       {
           str[i]='0';
       }
      else if(st.empty() !=1  and st.front()!=str[i])
      {
         st.push(str[i]);
         sets.insert(str[i]);
         str[i] = st.front();
      }
      else if(st.empty()!=1 and st.front()==str[i])
      {
          str[i]='0';
          st.pop();
      }

    }
    return str;
}
//Main Function:
int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    vector<char> vctr(size , 0);
    for(int i=0;i<size;i++)
    {
        cin>>vctr[i];
    }
    //Call to the main function:
    vector<char> vc=firstnonrepeating(vctr);
    //Print the vector:
    for(auto x: vc)
    {
        cout<<x<<" ";
    }

    return 0;
}

