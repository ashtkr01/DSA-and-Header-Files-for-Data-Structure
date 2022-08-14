#include<iostream>
#include "linkedlist.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Stack<char> s;

    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');

    while(s.empty()!=1)
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}
