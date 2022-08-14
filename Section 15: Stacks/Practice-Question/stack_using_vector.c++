#include<iostream>
#include "vector.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    while(st.empty()!=1)
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    return 0;
}
