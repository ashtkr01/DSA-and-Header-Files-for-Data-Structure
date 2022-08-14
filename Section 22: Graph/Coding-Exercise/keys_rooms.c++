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
        l = new list<int>[V];
    }

    // adEdge
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
    }

    // Traversal
    void traversal(int ele, vector<bool> &visited)
    {
        queue<int> q;
        q.push(ele);
        visited[ele] = true;

        while (!q.empty())
        {
            int element = q.front();
            q.pop();
            for (auto nbr : l[element])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
};

bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    // your code goes here
    int size = rooms.size();
    Graph g(size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < rooms[i].size(); j++)
        {
            g.addEdge(i, rooms[i][j]);
        }
    }
    vector<bool> visited(size, false);
    g.traversal(0, visited);

    for (int i = 0; i < size; i++)
    {
        if (!visited[i])
        {
            return false;
        }
    }
    return true;
}