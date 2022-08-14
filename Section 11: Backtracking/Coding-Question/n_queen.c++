#include<bits/stdc++.h>
using namespace std;

int col_check[100];
int left_diag[100];
int right_diag[100];
int cnt=0;
/*************To check whether place is safe or not******************************/
bool isItSafe(int arr[20][20] , int n , int col , int row)
{
   //Left diagonal check:
   if(left_diag[n-1+(row-col)]==1)
   {
       return false;
   }
   //Right Diagonal Check
   if(right_diag[row+col]==1)
   {
       return false;
   }
   //Check for whole column
   if(col_check[col]==1)
   {
       return false;
   }
   return true;
}

//N-queen Function
void n_queen_placed(int arr[20][20], int n, int curr_row)
{
    if(curr_row >=n )
    {
        cnt++;
        return ;
    }
    
    for(int i=0;i<n;i++)
    {
        if(isItSafe(arr,n,i,curr_row))
        {
            arr[curr_row][i]=1;
            left_diag[n-1+(curr_row-i)]=1;
            right_diag[curr_row+i]=1;
            col_check[i]=1;
            n_queen_placed(arr,n,curr_row+1);
            
            //Backtrack
            right_diag[curr_row+i]=0;
            left_diag[n-1+(curr_row-i)]=0;
            col_check[i]=0;
            arr[curr_row][i]=0;
        }
    }
    

}

int nQueen(int n){
    cnt =0;
    int arr[20][20]={0};

    n_queen_placed(arr,n,0);
    return cnt;

}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin>>n;
   cout<<nQueen(n)<<endl;
    // cout<<res<<endl;
    return 0;
}
