#include<iostream>
#include "trie.h"
using namespace std;

int main(int argc, char const *argv[])
{
    string words[] = {"abc","abde","acd","abe","aeb","abba"};
    Trie t;
    
    for(auto word : words)
    {
        t.insert(word);
    }

    string str;
    cin>>str;
   t.search(str);
    return 0;
}
