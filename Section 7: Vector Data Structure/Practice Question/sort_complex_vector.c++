#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> vctr)
{
    int answer=0;
   for(int i=0;i<vctr.size();i++)
   {
       answer +=vctr[i];
   }
   return answer;
}

bool compare(pair<string,vector<int>> a,pair<string,vector<int>> b)
{
    return sum(a.second) > sum(b.second);
}

int main(int argc, char const *argv[])
{
    vector<pair<string,vector<int>>> vctr ={{"Rohan" ,{10,20,11}},
                                            {"Prateek" , {10,21,3}}, 
                                            {"Vivek" ,{ 4,5,6}}, 
                                            {"Rijul" ,{ 10,13,20}}
                                            };

    sort(vctr.begin(),vctr.end(),compare);

    for(auto x: vctr)
    {
        cout<<x.first<<" -- ";
        for(auto y: x.second)
        {
            cout<<y<<"-";
        }
        cout<<endl;
    }
    return 0;
}
