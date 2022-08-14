#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    set<pair<int , int> > st;

    st.insert(make_pair(3,5));

    pair<int ,int> pairs;
    pairs = *(st.begin());
    cout<<pairs.first<<" , "<<pairs.second<<endl;
    return 0;
}
