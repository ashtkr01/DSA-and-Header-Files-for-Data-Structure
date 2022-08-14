#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[]={10,15,20,13,6,90};
    int size = sizeof(arr)/sizeof(int);
     //By default it is Maxheap:
    // greater<int> --> By default in-built comparator
    priority_queue<int ,vector<int> , greater<int> > heap;

    for(int i=0;i<size;i++)
    {
        heap.push(arr[i]);
    } 

    while(!heap.empty())
    {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
    return 0;
}
