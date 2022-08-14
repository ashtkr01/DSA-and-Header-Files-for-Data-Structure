#include <bits/stdc++.h>
using namespace std;

queue<int> interLeave(queue<int> q){
queue<int> q1;
queue<int> q2;
int size=q.size();
for(int i=1;i<=size;i++)
{
    if(i<=(size/2))
    {
        q1.push(q.front());
        q.pop();
    }
    else if(i>(size/2))
    {
       q2.push(q.front());
       q.pop();
    }
}
while(!q.empty())
{
    q.pop();
}
//Put in vector:
for(int i=1;i<size;i=i+2)
{
    q.push(q1.front());
    q.push(q2.front());
    q1.pop();
    q2.pop();
}

return q;
}
//Main Function:
int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
    queue<int> q;
    //Initialize the queue:
    while(size--)
    {
        int n;
        cin>>n;
        q.push(n);
    }
    cout<<q.size()<<endl;
    return 0;
}
