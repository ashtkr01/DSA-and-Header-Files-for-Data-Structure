#include<bits/stdc++.h>
#include<stack>
using namespace std;
//Insert at bottom
void insertAtBottom(stack<int> &s, int data)
{
    if(s.empty())
    {
        s.push(data);
        return;
    }
    int d = s.top();
    s.pop();
    insertAtBottom(s,data);
    s.push(d);
}
int main(int argc, char const *argv[])
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
     
     int data;
     cin>>data;
    insertAtBottom(s,data);

    //Print the Stack:
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;

    
    return 0;
}
