#include<bits/stdc++.h>
using namespace std;
//Partition function:
int partition_func(vector<int> &vctr , int low , int high )
{
    //Always ensure that element at pivot_idx should not be changed:
    
    int i=low;
    int pivot_idx=high;
    for(int k=low ; k<=high;k++)
    {
        if(vctr[k]<vctr[pivot_idx])
        {
            swap(vctr[i],vctr[k]);
            i++;
        }
    }
    swap(vctr[i],vctr[pivot_idx]);
    return i;

}
//QuckSort Function:
void quickSort(vector<int> &vctr , int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int rand_idx = (rand()%(high-low+1)) + low;
    int pivot_idx = rand_idx;
    swap(vctr[high],vctr[pivot_idx]);
    // int pivot_idx=high;
    int part_idx=partition_func(vctr , low, high);
    quickSort(vctr,low,part_idx-1);
    quickSort(vctr,part_idx+1,high);
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    vector<int> vctr;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        vctr.push_back(element);
    }
    //Calling to the quick sort:
    quickSort(vctr,0,n-1);
    //Print the array:
    for(auto x : vctr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
