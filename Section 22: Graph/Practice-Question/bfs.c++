#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
 public:
        Graph(int v)
        {
            V=v;
            l=new list<int>[V];
        }
        //Add edges to the graph:
        void addEdge(int u , int v , bool undir = true)
        {
            l[u].push_back(v);
            if(undir)
            {
                l[v].push_back(u);
            }
        }
        //Bfs Traversal
        void bfsTraversal(int n)
        {
            vector<bool> visited(7,false);
            queue<int> que;

            //Insert First element in queue:
            que.push(n);
            visited[n]=true;

            while(!que.empty())
            {
                int element = que.front();
                cout<<element<<" ";
                que.pop();
                for(auto x : l[element])
                {
                    if(visited[x] == false)
                    {
                        que.push(x);
                        visited[x]=true;
                    }
                }
            }
            cout<<endl;
        }
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
    cout<<"BFS Traversal :"<<endl;
    g.bfsTraversal(n);
    return 0;
}
