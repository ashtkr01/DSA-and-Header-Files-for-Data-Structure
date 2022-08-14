#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int * arr=new int[n];
     
     //Print the adreess pointed by arr:
     cout<<arr<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
    }

    //Print the address pointed by arr
    cout<<arr<<endl;

    //print the arr
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Delete the memory which is dynamically allocated:
    delete [] arr;

    //Print the address pointed by arr
    cout<<arr<<endl;
    /*
    cout<<arr[3]<<endl; //Unpredicatable:
    */


    return 0;
}
