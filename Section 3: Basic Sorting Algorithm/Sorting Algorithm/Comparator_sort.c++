#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

/*************Comparator Function******************************/
bool compare(int a, int b)
{
    return a<b;
}
/********************Main Function**********************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{9,5,6,4,7,1,2,3,8};
    int n=vctr.size();
    //First Method
    sort(vctr.begin(),vctr.end(),compare);
    //Second way to sort in descending order
    sort(vctr.begin(),vctr.end(),greater<int>());

    //Print the vector:
    for(auto itr : vctr)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    return 0;
}
