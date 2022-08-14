#include<bits/stdc++.h>
using namespace std;
#define MAX 9999;

class Graph{
    int V;
    list<pair<int, int> > *l;

    public :
    //Constructor:
    Graph(int v)
    {
        V=v;
      l=new list<pair<int,int>>[V];
    }
    //addEdge:
    void addEdge(int u , int v , int weight , bool undir=true)
    { 
        pair<int,int> pair1;
        pair1=make_pair(v,weight);
        l[u].push_back(pair1);
        if(undir)
        {
             pair<int,int> pair2;
        pair2=make_pair(u,weight);
            l[v].push_back(pair2);
        }
    } 
    //Comparator:
    bool compare(pair<int ,int> x , pair<int ,int> y)
    {
        return x.second < y.second;
    }
    //Dijkstra's Algorithm
    void dijkstra(int source)
    {
        vector<pair<int,int> > vctr;
     vector<bool> visited(V, false);
     vector<int> dist(V ,999);
     set<pair<int,int> > st;

     dist[source]=0;
     st.insert(make_pair(0,source));

     while(!st.empty())
     {
         pair<int, int> pairs = *(st.begin());
        //  cout<<pairs.second<<"-->"<<pairs.first<<endl;
         visited[pairs.second]=true;
         vctr.push_back(pairs);
         dist[pairs.second] = pairs.first;
         st.erase(st.begin());

         for(auto x: l[pairs.second])
         {
             if(visited[x.first]==false)
             {

             if(st.find(make_pair(dist[x.first],x.first))!=st.end()) //Find
             {
                //  cout<<"Hi"<<endl;
                 if(dist[x.first] > (pairs.first + x.second))
                 {
                     //delete and then reinsert:
                     st.erase(st.find(make_pair(dist[x.first],x.first)));
                    //  then reinsert
                     st.insert(make_pair(pairs.first + x.second , x.first));
                      dist[x.first] = pairs.first + x.second;
                    //   cout<<"hel"<<endl;
                    //   cout<<dist[x.first]<<endl;
                  }
             }
             else{
                  st.insert(make_pair(pairs.first + x.second , x.first));
                   dist[x.first] = pairs.first + x.second;
                //    cout<<"Hello"<<endl;
             }
             }
         }

        //  sort(st.begin() , st.end() , compare);
     }
    
    for(auto x:vctr)
    {
        cout<<x.second<<"-->"<<x.first<<endl;
        
        cout<<endl;
    }
    }
//Print 
        void print()
        {
            for(int i=0;i<V;i++)
            {
                cout<<i<<"-->";
                for(auto x : l[i])
                {
                    cout<<x.first<<","<<x.second<<"-->";
                }
                cout<<endl;
            }
        }   


    
};
//Main Function:
int main(int argc, char const *argv[])
{
    Graph g(5);

    g.addEdge(0,1,1);
    g.addEdge(0,3,7);
    g.addEdge(3,2,2);
    g.addEdge(1,2,1);
    g.addEdge(0,2,4);
    g.addEdge(3,4,3);

    g.print();

    g.dijkstra(0);
    return 0;
}
