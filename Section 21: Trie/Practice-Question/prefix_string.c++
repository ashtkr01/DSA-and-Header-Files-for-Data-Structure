#include<bits/stdc++.h>
using namespace std;

//Class:
class Trie;

class Node
{
    char data;
    unordered_map<char, Node *> m;
    bool isTerminal;

public:
    Node(char data)
    {
        this->data = data;
        isTerminal = false;
    }

    friend class Trie;
};

class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node('\0');
    }
    // Insert Function
    void insert(string str)
    {
        Node *temp = root;

        for (char ch : str)
        {
            if (temp->m.count(ch) == 0)
            {
                Node *n = new Node(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    }



      //Function
    void func(Node * temp , string str , vector<string> &vctr)
    {   
        if(temp->isTerminal)
        {
              vctr.push_back(str);
              return;

        }

      for(auto ch : temp->m)
      {
          char c=ch.first;
         
          func(temp->m[ch.first] , str+c , vctr);

      }
    
      return;

    }






    // Search Function:
   vector<string> search(string str)
    {  
        string st = "";
        vector<string> vctr;

        Node *temp = root;
        for (char ch : str)
        {
            if (temp->m.find(ch) != temp->m.end())
            {
                cout<<ch<<endl;
                st += ch;
                temp = temp->m[ch];
                continue;
            }
            else {
                return vctr;
            }
           
        }
        cout<<st<<endl;
        func(temp , st ,vctr);
        // return temp->isTerminal;
        //Sort the vector:
        sort(vctr.begin() , vctr.end());
        //Print the vector:
        for(auto x : vctr)
        {
            cout<<x<<" ";
        }
        return vctr;
    }

  
};

vector<string> findPrefixStrings(vector<string> words, string prefix){
    // your code goes here
    vector<string> vctr;
    Trie t;
     for(auto word : words)
    {
        t.insert(word);
    }

    
   vctr =   t.search(prefix);
   return vctr;
}

//Main Function:
int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    string prefix;
    cin>>prefix;
    vector<string> vctr(size , "");
    vector<string> res;
    for(int i=0;i<size;i++)
    {
        cin>>vctr[i];
    }
    //Call to the function:
    res = findPrefixStrings(vctr , prefix);
    return 0;
}
