#include<iostream>
#include "heapstd.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Heap<int>  h;
     
     h.push(5);
     h.push(4);
     h.push(3);
     h.push(2);
     h.push(1);

     h.display();
     h.pop();
     h.display();
     h.pop();
     h.display();
     h.pop();
     h.display();
     h.pop();
     h.display();
     h.pop();
     h.display();
     h.pop();
     h.display();
    return 0;
}
