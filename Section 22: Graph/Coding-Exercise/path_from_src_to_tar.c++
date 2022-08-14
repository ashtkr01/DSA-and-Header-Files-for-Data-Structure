#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> res;
class Graph{
   public:
   int V;
   list<int> *l;
   //Constructor:
   Graph(int v)
   {
       V=v;
       l=new list<int>[V];
   }
   //Add Edge:
   void addEdge(int u , int v)
   {
       l[u].push_back(v);
   }
   //Traversal Helper
    void traversalHelper(int node , int target , vector<int> &vctr , vector<bool> &visited)
    {
        if(node==target)
        {

            res.push_back(vctr);
            return;
        }
        for(auto nbr : l[node])
        {
            
            if(!visited[nbr])
            {
                visited[nbr]=true;
                vctr.push_back(nbr);
                traversalHelper(nbr , target , vctr , visited);
                visited[nbr]=false;
                vctr.pop_back();
            }
        }
    }
    void traversal(int source , int target , vector<int> &vctr , vector<bool> &visited)
    {
        visited[source]=true;
        vctr.push_back(source);
        //Call to the main function:
        traversalHelper(source , target , vctr , visited);

    }
};

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    // your code goes here
    int size = graph.size();
    Graph g(size);
    vector<bool> visited(size , false);
    vector<int> vctr;
    //Build the graph:
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<graph[i].size();j++)
        {
            g.addEdge(i , graph[i][j]);
        }
    }
    //Call
    g.traversal(0 , size-1 , vctr , visited);
    //Print the vector
    for(auto x: res)
    {
        for(auto y: x)
        {
            cout<<y<<"  ";
        }
        cout<<endl;
    }
     return res;
}
//Main function:
int main(int argc, char const *argv[])
{
    
    //Initialize the vector:
    vector<vector<int>> vctr{{1,2,3},{2},{3},{}};
    vector<vector<int>> v;
    //Call:
    v=allPathsSourceTarget(vctr);
    cout<<vctr.size()<<endl;
    return 0;
}

