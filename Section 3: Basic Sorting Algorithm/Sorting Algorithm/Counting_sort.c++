#include<bits/stdc++.h>
using namespace std;

/***************************Counting Sort Implementation*************************/
void counting_sort(vector<int> vctr)
{
    int size = vctr.size();
    //Find largest element in vector
    int max_element=vctr[0];
    for(int i=1;i<size;i++)
    {
       if(vctr[i]>max_element)
       {
           max_element=vctr[i];
       }
    }
    vector<int> freq(max_element+1,0);
    //FRequency array initialization:
    for(int i=0;i<size;i++)
    {
        freq[vctr[i]]++;
    }

    //prefix sum array
    int size_2=freq.size();
    for(int i=1;i<size_2;i++)
    {
        freq[i]=freq[i]+freq[i-1];
    }

    vector<int> output(size);
    for(int i=size-1;i>=0;i--)
    {
        output[freq[vctr[i]]-1]=vctr[i];
        freq[vctr[i]]--;
    }
    //Display the element 
    for(auto x: output)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
/***********************************Main Function****************************/
int main(int argc, char const *argv[])
{
    vector<int> vctr{9,5,6,4,1,2,8,7,3,5,3,10};
    counting_sort(vctr);

    return 0;
}
