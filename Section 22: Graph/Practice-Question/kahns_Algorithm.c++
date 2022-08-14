#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;

public:
//Constructor:
Graph(int v)
{
    V=v;
    l=new list<int>[V];
} 
//Add edges:
 void addEdges(int u, int v)
 {
     l[u].push_back(v);
 }   

//Topological sort
void topologicalSort()
{
    //Initialization of Queue:
    queue<int> que;
    vector<int> indegree(V,0);

    for(int i=0;i<V;i++)
    {
        for(auto x : l[i])
        {
            indegree[x]++;
        }
    }
    //Insert the vertices whose indegree is zero
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0)
        {
            que.push(i);
        }
    }
    //AS we know all the element lie in queue is independent.
    while(que.empty()!=1)
    {
        int element = que.front();
        cout<<element<<" ";
        que.pop();
        // Iterate over the neigbour of this node i.e element and reduce it's indegree by factor of 1
        for(auto x : l[element])
        {
            indegree[x]--;
            if(indegree[x]==0)
            {
                que.push(x);
            }
        }
    }
}
};
//Main Function:
int main(int argc, char const *argv[])
{
    Graph g(6);
    g.addEdges(1,4);
    g.addEdges(1,2);
    g.addEdges(4,5);
    g.addEdges(3,5);
    g.addEdges(2,3);
    g.addEdges(0,2);

    g.topologicalSort();
    return 0;
}
