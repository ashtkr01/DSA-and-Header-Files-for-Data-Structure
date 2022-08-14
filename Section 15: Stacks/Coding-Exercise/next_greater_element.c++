#include<bits/stdc++.h>
using namespace std;

//Return next greater element:
int nextgreaterElement(vector<int> &vctr , int element)
{
    if(vctr.size()==0)
    {
        vctr.push_back(element);
        return -1;
    }
    else{
        for(int i=vctr.size()-1;i>=0;i--)
        {
            if(vctr[i] > element)
            {
                vctr.push_back(element);
                 return vctr[i];
            }
        }
        vctr.push_back(element);
        return -1;
    }
}
vector<int> nextGreaterElement(vector<int> v){
      vector<int> vctr;
     stack<int> st;
    for(int i=0;i<v.size();i++)
    {
         st.push(v[i]);
    }
    
    int last_idx=v.size()-1;
    // cout<<last_idx<<endl;
    while(st.empty() !=1)
    {
        int ele = st.top();
        //Element associated to the vector:
        v[last_idx]=nextgreaterElement(vctr , ele);
        st.pop();
        last_idx--;
    }
    //Display:
    // for(auto x: v)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    return v;
}

int main(int argc, char const *argv[])
{
    vector<int> vctr{11,13,21,3};
    vector<int> v;
    v=nextGreaterElement(vctr);
    
    return 0;
}
