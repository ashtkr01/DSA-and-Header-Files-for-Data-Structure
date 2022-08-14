#include<iostream>
using namespace std;
/********************Sum Of All Sub Arrary********************************/
void sum_of_subarray(int * arr, int n)
{
    int sum=0;
    int max_of_sum_of_subarray=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {    
            sum=0;
            for(int k=i;k<=j;k++)
            {
              sum +=arr[k];
            }
              cout<<sum<<endl;
            if(sum>max_of_sum_of_subarray)
            {
                max_of_sum_of_subarray=sum;
            }
        }
    }
    cout<<"Maximum of sum of subarray :"<<max_of_sum_of_subarray<<endl;
}
/***********************************Main Function***************************/
int main(int argc, char const *argv[])
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int size=sizeof(arr)/sizeof(int);
    sum_of_subarray(arr,size);
    return 0;
}
