#include<bits/stdc++.h>
using namespace std;

void mergeSortRowWise(vector< vector<int> > &vctr ,int start_row , int last_row ,int start_col , int last_col)
{

    int mid=(start_col + last_col)/2;
    for(int row=start_row ; row<=last_row ; row++)
    {

     int i=start_col;
     int j=mid+1;
     vector<int> v;

     while(i<=mid and j<=last_col)
     {
         if(vctr[row][i] < vctr[row][j])
         {
            v.push_back(vctr[row][i]);
            i++;
         }
         else{
             v.push_back(vctr[row][j]);
             j++;
         }
     }   
     //First step
     while(i<=mid)
     {
         v.push_back(vctr[row][i]);
         i++;
     } 
     //Second Step
     while(j<=last_col)
     {
         v.push_back(vctr[row][j]);
         j++;
     } 
    //  copy the vector:
    int y=0;
    for(int x=start_col;x<=last_col;x++)
    {
      vctr[row][x] = v[y];
      y++;
    }
    v.erase(v.begin() , v.end());
    }

}
//Function to sort column wise
void mergeSortColWise(vector< vector<int> > &vctr ,int start_row , int last_row ,int start_col , int last_col)
{
    int mid=(start_row + last_row)/2;

    for(int col=start_col ; col<=last_col ; col++)
    {

     int i=start_row;
     int j=mid+1;
     vector<int> v;

     while(i<=mid and j<=last_row)
     {
         if(vctr[i][col] < vctr[j][col])
         {
            v.push_back(vctr[i][col]);
            i++;
         }
         else{
             v.push_back(vctr[j][col]);
             j++;
         }
     }   
     //First step
     while(i<=mid)
     {
         v.push_back(vctr[i][col]);
         i++;
     } 
     //Second Step
     while(j<=last_row)
     {
         v.push_back(vctr[j][col]);
         j++;
     } 
    //  copy the vector:
    int y=0;
    for(int x=start_row;x<=last_row;x++)
    {
      vctr[x][col] = v[y];
      y++;
    }
    v.erase(v.begin() , v.end());
    }



}
//Function to merge 2-D Array:
void mergeSortArray(vector< vector<int> > &vctr ,int start_row , int last_row ,int start_col , int last_col)
{
   if(start_row >=last_row  and start_col >= last_col)
   {
       return;
   }
   int mid_row=(start_row + last_row)/2;
   int mid_col=(start_col + last_col)/2;

   mergeSortArray(vctr , start_row , mid_row , start_col , mid_col);
   mergeSortArray(vctr , start_row , mid_row , mid_col+1 , last_col);
   mergeSortArray(vctr,mid_row+1, last_row , start_col , mid_col);
   mergeSortArray(vctr,mid_row+1, last_row , mid_col+1 , last_col );

   mergeSortRowWise(vctr , start_row ,  last_row , start_col ,  last_col );
   mergeSortColWise(vctr , start_row ,  last_row , start_col ,  last_col );
   

}

/************************Main Function***************************/
vector<vector<int>> mergeSort(int m, int n, vector<vector<int>> v){
    // your code goes here
    mergeSortArray(v , 0  , m-1  , 0 , n-1);
    return v;
}
/*********************Main Function**************************************/
int main(int argc, char const *argv[])
{
    int row , col;
    cin>>row>>col;
    vector<vector<int > > vctr(row , vector<int> (col,0));

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>vctr[i][j];
        }
    }
    //Call to the function:
    vctr = mergeSort(row , col , vctr);
    //Print vector:
    for(auto x : vctr)
    {
        for(auto y : x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
