#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
     //Constructor
     Graph(int v)
     {
         V=v;
         l=new list<int>[V];
     }
     //Add edges
     void addEdge(int u, int v, bool undir = true)
     {
         l[u].push_back(v);
         if(undir)
         {
             l[v].push_back(u);
         }
     }
     //DFS Helper: Since we are going to create or make a recursive Algorithm , I will create recursive helper
     // function that will help to do DFS:
     void dfsHelper(int ele , vector<bool> &visited)
     {
         cout<<ele<<" ";
         for(auto x : l[ele])
         {
             if(visited[x]==false)
             {
                 visited[x]=true;
                 dfsHelper(x , visited);
             }
         }
     }
     // DFS Traversal:
     void dfsTraversal(int resource)
     {
         vector<bool> visited(V,false);
         visited[resource]=true;
         dfsHelper(resource , visited);


     }
     // Print
      //Print 
        void print()
        {
            for(int i=0;i<V;i++)
            {
                cout<<i<<"-->";
                for(auto x : l[i])
                {
                    cout<<x<<"-->";
                }
                cout<<endl;
            }
        }   
};
//Main Function:
int main(int argc, char const *argv[])
{
    Graph g(7);
    g.addEdge(1,2);
    g.addEdge(1,0);
    g.addEdge(3,2);
    g.addEdge(0,4);
    g.addEdge(3,5);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(5,6);

    g.print();
    int n;
    cout<<"Enter the starting element :"<<endl;
    cin>>n;
    cout<<"DFS Traversal :"<<endl;
    g.dfsTraversal(n);
    return 0;
}
