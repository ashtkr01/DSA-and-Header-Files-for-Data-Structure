#include<bits/stdc++.h>
using namespace std;
/*******************************Comparator Function****************************/
bool compare(pair<int,int> x,pair<int,int> y)
{
    if(x.first!=y.first)
    {
        return x.first<y.first;
    }
    else if(x.first==y.first)
    {
        return x.second<y.second;
    }
}

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    sort(v.begin(),v.end(),compare);
    return v;
    
}

/************************************Main Function****************************/
int main(int argc, char const *argv[])
{
    vector<pair<int,int> > vctr{{3,5},{2,3},{3,7},{1,5},{3,4}};
    vctr=sortCartesian(vctr);
    //Display the pairs
    for(auto x:vctr)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
