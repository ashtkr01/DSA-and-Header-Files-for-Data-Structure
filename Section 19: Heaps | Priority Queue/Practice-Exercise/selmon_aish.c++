#include<bits/stdc++.h>
using namespace std;
//distance :
int dist(pair<int,int > a)
{
    return ((a.first) * (a.first))+((a.second) * (a.second));
}
//Custom Comparator:
class Compare{
   public: 
     bool operator()(pair<int , int> a , pair<int , int> b)
     {
         if(dist(a) != dist(b))
         {
             return dist(a) > dist(b);
         }
         else{
             return a.first + a.second > b.first + b.second;
         }
     }
};

int main(int argc, char const *argv[])
{
    int count=0;
    vector<pair<int , int> > vctr;
    int n , k;
    cin>>n>>k;

    //Initialize the vector of pair:
    for(int i=0;i<n;i++)
    {
        int a , b;
        cin>>a>>b;
        vctr.push_back({a,b});
    }
    //Calling custom comparator:
    priority_queue<pair<int , int >, vector<pair<int , int > > , Compare > heap;
    //Initializa heap:
    for(int i=0;i<n;i++)
    {
        heap.push(make_pair(vctr[i].first , vctr[i].second));
    }
    
    while(k--)
    {
        pair<int , int> p = heap.top();
        count += p.first + p.second;
        heap.pop();
    }

    cout<<count<<endl;

    return 0;
}
