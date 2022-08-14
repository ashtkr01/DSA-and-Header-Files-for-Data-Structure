#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> vctr(n,0);

    //Create a vector:
    for(int i=0;i<n;i++)
    {
        vctr[i]=i;
    }

    //Time calculation: for merge Sort
    auto start_time = clock();
    sort(vctr.begin() , vctr.end());
    auto end_time = clock();

    //Time taken:
    cout<<"Time Taken :"<<end_time-start_time<<endl;
    return 0;
}
