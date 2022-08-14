#include<iostream>
#include<list>
using namespace std;

class Graph{
    int V;
    //Pointer to a (single) linkedlist
    list<int> *l;
    //Constructor:
    public:
    Graph(int v)
    {
        V=v;
        //Create array of pointers and each pointer points to a particular linked list;
        //cONCLUSION:
        //WE have array of size V , each element of the array is a linked list
        l = new list<int>[V];
        
    }
    //Construct graph:
    void addEdge(int u , int v , bool undir = true)
    {
        l[u].push_back(v);
        if(undir)
        {
            l[v].push_back(u);
        }
    }
    //Display Adjacency List:
    void printAdjList()
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
    Graph g(6);

    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);

    g.printAdjList();

    return 0;
}
