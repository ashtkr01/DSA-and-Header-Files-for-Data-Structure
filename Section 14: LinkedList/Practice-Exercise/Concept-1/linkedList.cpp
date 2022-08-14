#include<iostream>
#include "list.h"
using namespace std;

int main(int argc, char const *argv[])
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.insert(2,2);
    l.insert(10,0);
    // l.search(25);
    // l.search(5);

    // cout<<l.searchRecursive(5)<<endl;
    // cout<<l.searchRecursive(25)<<endl;

    
    // while(head!=NULL)
    // {
    //  cout<<head->getData()<<"-->";
    //  head=head->next;
    // }

    l.pop_front();
    l.pop_back();
    l.remove(3);
    Node* head = l.begin();
    while(head!=NULL)
    {
     cout<<head->getData()<<"-->";
     head=head->next;
    }

    //Print
    return 0;
}
