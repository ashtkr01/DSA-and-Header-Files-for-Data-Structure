#include<bits/stdc++.h>
using namespace std;

/****************************Selection Sort********************************/
void selection_sort(vector<int> &vctr)
{
    int min_element=INT_MAX;
    int index=-1;
    int size=vctr.size();
    for(int i=0;i<size-1;i++)
    {
        index=-1;
        min_element=INT_MAX;
        for(int j=i;j<size;j++)
        {
            if(vctr[j]<min_element)
            {
                min_element=vctr[j];
                index=j;
            }
        }
        if(index!=-1)
        {
            swap(vctr[i],vctr[index]);
        }
    }
}
/****************************Selection Sort********************************/
void selection_Sort(vector<int> &vctr)
{
    int size=vctr.size();
    for(int i=0;i<size-1;i++)
    {
        int curr_element=vctr[i];
        int  min_index=i;
    
        for(int j=i;j<size;j++)
        {
            if(vctr[j]<vctr[min_index])
            {
               min_index=j;
            }
        }
        
            swap(vctr[i],vctr[min_index]);
        
    }
}

/***************************Main Function**********************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{8,6,7,4,2,5,9,1,3};
    // selection_sort(vctr);
    selection_Sort(vctr);
    //Print the Sorted Vector
    for(auto itr: vctr)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    return 0;
}
