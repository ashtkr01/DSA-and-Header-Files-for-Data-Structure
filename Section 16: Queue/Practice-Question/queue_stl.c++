#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);

    while(!que.empty())
    {
        cout<<que.front()<<endl;
        que.pop();
    }
    return 0;
}
