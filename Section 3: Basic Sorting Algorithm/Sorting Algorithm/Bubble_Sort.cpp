#include<bits/stdc++.h>
using namespace std;

/***********************Implementation Of BubbleSort****************************/
void bubble_sort(vector<int> &vctr)
{
    int n=vctr.size();
    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-1-i;j++)
       {
           if(vctr[j]>vctr[j+1])
           {
               swap(vctr[j],vctr[j+1]);
           }
       }
    }
}
/***********************Implementation Of Optimized BubbleSort****************************/
void optimized_bubble_sort(vector<int> &vctr)
{
    int n=vctr.size();
    int check=0;
    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-1-i;j++)
       {
           if(vctr[j]>vctr[j+1])
           {
               check++;
               swap(vctr[j],vctr[j+1]);
           }
       }
       if(check==0)
       {
           return;
       }
    }
}
/***********************************Main Function********************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{8,6,9,7,1,2,3,4};
    /**************Beforee Sorting******************/
    for(auto itr: vctr)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    bubble_sort(vctr);
    for(auto itr: vctr)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    return 0;
}
