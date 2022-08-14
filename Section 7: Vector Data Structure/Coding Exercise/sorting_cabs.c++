#include<bits/stdc++.h>
using namespace std;

double dist(int a, int b)
{
    double distance=0;
    distance=sqrt((a*a)+(b*b));
}

//Comparator:
bool compare(pair<int,int> a, pair<int , int> b)
{
    return dist(a.first,a.second) < dist(b.first,b.second);
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
     sort(v.begin(),v.end(),compare);
     return v;
    
}

/*************************************Main Function********************************/
int main(int argc, char const *argv[])
{
    vector<pair<int,int>> vctr={{2,3},{1,2},{3,4},{2,4},{1,4}};
    vctr=sortCabs(vctr);

    for(auto x: vctr)
    {
        cout<<"{"<<x.first<<","<<x.second<<"}"<<endl;
    }
    
    return 0;
}
