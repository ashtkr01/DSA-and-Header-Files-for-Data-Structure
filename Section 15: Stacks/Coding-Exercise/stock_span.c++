#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpanner(vector<int> &stocks)
{
    stack<int> st1;
    stack<int> st2;
    vector<int> vctr;
    // int count = 0;
    for (int i = 0; i < stocks.size(); i++)
    {
        // count = 0;
        int ele = stocks[i];
        while((st1.empty()!=1) and (st1.top() <= ele))
        {
            st1.pop();
            st2.pop();
            
        }
        if(st1.empty())
        {
            if(i < 1)
            {
                vctr.push_back(1);
            }
            else{
            vctr.push_back(i);
            }
            st1.push(stocks[i+1]);
            st2.push(i);
        }
        else{
            int idx = st2.top();
            vctr.push_back(i - idx);
            st1.push(stocks[i]);
            st2.push(i);
        }
    }
    return vctr;

}
//Main:
int main(int argc, char const *argv[])
{
    vector<int> vctr = { 100 , 80 , 60 , 70 , 60 , 75 , 85 };
    vector<int> res;
    res = stockSpanner(vctr);
    //Print the vector:
    for(auto x : res)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
