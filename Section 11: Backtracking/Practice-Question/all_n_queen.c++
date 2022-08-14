#include<bits/stdc++.h>
int res=0;
using namespace std;
 /*column array where its indices indicates column and 
  used to check whether a queen can be placed in that
    column or not*/
int col_check[100]={0};
/* right_dia is an array where its indices indicate row+col
   and used to check whether a queen can be placed on 
   right diagonal or not*/
int right_dia[100]={0};
/* left_dia is an array where its indices indicate row-col+(row-1)
 (row-1) is for shifting the difference to store negative 
 indices */
int left_dia[100]={0};
/*********************************Print*********************************/
void print(int arr[100][100] , int row , int col)
{
    cout<<"Configuration :  "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

/************************Function to check the current cell is safe or not******************/
bool isItSafe(int row , int col ,int row_size)
{
    if(col_check[col]==1)
    {
        return false;
    }
    if(right_dia[row+col]==1)
    {
        return false;
    }
    if(left_dia[row-col+(row_size-1)]==1)
    {
        return false;
    }
    return true;
}
void all_pattern(int arr[100][100] ,int r, int row, int col)
{
    if(r>=row)
    {
        res++;
        print(arr, row,col);
        return;
    }
 /* Consider this row and try placing
       this queen in all colum one by one */
    for(int k=0;k<col;k++)
    {
        if(isItSafe(r,k,row))
        {
            arr[r][k]=1;
            col_check[k]=1;
            // row_check[k]=1;
            left_dia[r-k+(row-1)]=1;
            right_dia[r+k]=1;
            all_pattern(arr , r+1 , row, col);
              col_check[k]=0;
            //   row_check[k]=0;
            left_dia[r-k+(row-1)]=0;
            right_dia[r+k]=0;
            arr[r][k]=0;
        }
    }
}

int main(int argc, char const *argv[])
{
    int row, col;
    cin>>row>>col;
    int arr[100][100]={0};
    all_pattern(arr , 0 ,row,col);
    cout<<res<<endl;
    return 0;
}
