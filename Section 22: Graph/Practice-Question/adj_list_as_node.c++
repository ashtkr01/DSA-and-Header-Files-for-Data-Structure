#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
          string name;
         // If we store this information here , It will be easy for us to get the information that we used to get // from linkedlist
          list<string> nbrs;
          //Constructor:
          Node(string name)
          {
              this->name = name;
          }
};

class Graph{
    //All node
    // It should contain what all nodes are there & also we should be able to refer  a node by it's name  . 
    // So we  will maintain hashmap where string is a key and node* is a pointer .
    //Basically hashmap will provide relationship between key i.e., city-name  to the address of node object.
     /* Hashmap(string , Node*) */

     unordered_map<string , Node*> m;

     public:
           Graph(vector<string> cities)
           {
               for(auto city : cities)
               {
                   m[city] = new Node(city);
               }
           }
           //Add edges:
           void addEdge(string u , string v , bool undir = false)
           { 
               //Here m[u] refers to the pointer of a node oject 
               m[u]->nbrs.push_back(v);
               if(undir)
               {
                   m[v]->nbrs.push_back(u);
               }
           }
           //Print adjacency List:
           void printAdjList()
           {
               for(auto x : m)
               {
                   cout<<x.first<<"-->";
                   for(auto y : x.second->nbrs)
                   {
                       cout<<y<<"-->";
                   }
                   cout<<endl;
               }
           }


};

int main(int argc, char const *argv[])
{
    vector<string> vctr={"Delhi", "New York" ,"London" , "Paris"};
    Graph g(vctr);
    g.addEdge("Delhi","London");
    g.addEdge("New York","London");
    g.addEdge("Delhi","Paris");
    g.addEdge("Paris","New York");
  
  g.printAdjList();
    return 0;
}
