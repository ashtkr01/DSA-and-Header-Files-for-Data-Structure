#include<iostream>
#include "array.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Queue<int> que(5);

    que.enque(1);
    que.enque(2);
    que.enque(3);
    que.enque(4);
    que.enque(5);

    que.deque();
    que.deque();
    que.enque(6);
    que.enque(7);

    que.display();
    return 0;
}
