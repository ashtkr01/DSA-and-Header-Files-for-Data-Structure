#include<bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    vector<bool> vctr(N,false);
    // your code goes here
    bitset<1000> bit;
    bit.reset(0);

    bit[0] = 1;

    for(int i=0;i<num.size();i++)
    {
        bit = bit | (bit << num[i]);
    }

    for(int i=0;i<N;i++)
    {
        vctr[i] = bit[query[i]] ? true : false;

    }
    return vctr;
}