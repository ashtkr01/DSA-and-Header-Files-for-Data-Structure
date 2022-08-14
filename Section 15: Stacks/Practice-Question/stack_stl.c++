#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<string> books;

    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("Ruby");

    while(!books.empty())
    {
        cout<<books.top()<<endl;
        books.pop();
    }
    return 0;
}
