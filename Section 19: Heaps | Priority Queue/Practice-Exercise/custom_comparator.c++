#include<iostream>
#include<queue>
using namespace std;

class Compare
{
    public :
    bool operator()(int a , int b)
    {
        return a>b;
    }
};
// Main Function:
int main(int argc, char const *argv[])
{
    int arr[]={10,15,20,13,6,90};
    int size = sizeof(arr)/sizeof(int);
     //By default it is Maxheap:
    // greater<int> --> By default in-built comparator
    //Write own custom comparator:
    // priority_queue<int ,vector<int> , greater<int> > heap;
    priority_queue<int ,vector<int> , Compare > heap;

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
