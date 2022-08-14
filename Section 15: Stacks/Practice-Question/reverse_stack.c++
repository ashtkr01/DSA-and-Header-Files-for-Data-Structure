#include <iostream>
#include <stack>
using namespace std;
// InsertAt bottom
void insertAtBottom(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }
    int d = s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(d);
}
// reverse stack
void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int data = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, data);
}
int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Function:
    reverseStack(s);
    // Print the stack:
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
    /* code */
    return 0;
}
