/*************************************Stair Case Search*****************************/
#include<bits/stdc++.h>
using namespace std;

/**********************************Search Function*****************************/
void search_ele(int arr[100][100] , int row , int col,int ele)
{
    int i=0;
    int j=col-1;
    while(i<row and j>=0 )
    {
        if(ele<arr[i][j])
        {
            j--;
        }
        else if(ele>arr[i][j])
        {
            i++;
        }
        else if(ele==arr[i][j])
        {
            cout<<"Element has been found "<<endl;
            return;
        }
 

    }
    cout<<"element is not present "<<endl;
}

/***********************************Main Function**************************************/
int main(int argc, char const *argv[])
{
    int arr[100][100]={
                       {10,20,30,40},
                       {15,25,35,45},
                       {27,29,37,48},
                       {32,33,39,50}};
      search_ele(arr,4,4,28);
    return 0;
}
