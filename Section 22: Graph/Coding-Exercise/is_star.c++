#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int V;
    list<int> *l;
    // Constructor:
    Graph(int v)
    {
        V = v;
        l = new list<int>[v];
    }
    // AddEdge:
    void addEdge(int u, int v, bool undir = true)
    {
        l[u].push_back(v);
        if (undir)
        {
            l[v].push_back(u);
        }
    }
    // Check:
    int isStar(int source, int size)
    {
        int res = 0;
        int max = 0;

        for (int i = source; i <= size; i++)
        {
            int count = 0;
            for (auto x : l[i])
            {
                count++;
            }
            if (count == size - 1)
            {
                res = i;
                return i;
            }
        }
    }
};

int findCenter(vector<vector<int>> &v)
{
    // your code goes here
    int source = 1;
    int size = v.size() + 2;
    Graph g(size);
    // Create a graph
    for (int i = 0; i < v.size(); i++)
    {
        g.addEdge(v[i][0], v[i][1]);
    }

    int result = g.isStar(source, size-1);
    return result;
}
// Main Function:
int main(int argc, char const *argv[])
{
    vector<vector<int>> vctr{{1, 2}, {2, 3}, {4, 2}};
    int size = vctr.size() + 2;
    cout<<size<<endl;
    int res = findCenter(vctr);
    cout<<res<<endl;
    return 0;
}
