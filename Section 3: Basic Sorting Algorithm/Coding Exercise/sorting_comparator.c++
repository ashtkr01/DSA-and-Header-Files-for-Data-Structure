#include<bits/stdc++.h>
using namespace std;
/****************************Flag==true*********************************/
bool compare_1(int a, int b)
{
    return a<b;
}

/****************************Flag==false*********************************/
bool compare_2(int a, int b)
{
    return a>b;
}

vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    if(flag)
    {
        sort(a.begin(),a.end(),compare_1);
    }
    else{
        sort(a.begin(),a.end(),compare_2);
    }
    return a;
}
/*******************************Main Function******************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{8,6,4,7,5,9,1,2,3};
    vector<int> res;
    //  res=sortingWithComparator(vctr,true);
     res=sortingWithComparator(vctr,false);
     //Display the vector
     for(auto x:res)
     {
         cout<<x<<" ";
     }
     cout<<endl;
    return 0;
}
