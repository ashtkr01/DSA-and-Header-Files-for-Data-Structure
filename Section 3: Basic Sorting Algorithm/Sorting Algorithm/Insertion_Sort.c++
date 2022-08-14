#include<bits/stdc++.h>
using namespace std;

/*************************Insertion Sort*************************************/
void insertion_sort(vector<int> &vctr)
{
    int key=0;
    int size=vctr.size();
    int j=0;
    for(int i=1;i<size;i++)
    {
        key=vctr[i];
        j=i-1;
        while(j>=0 and key<vctr[j])
        {
            swap(vctr[j],vctr[j+1]);
            j--;
        }
        vctr[++j]=key;
    }
}
/****************************Main Function***********************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{9,5,8,7,1,6,3,2,4};
    for(auto itr: vctr)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    insertion_sort(vctr);
    //Print the Sorted vector
    for(auto itr: vctr)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    return 0;
}
