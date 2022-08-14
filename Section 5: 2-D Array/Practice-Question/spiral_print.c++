#include<bits/stdc++.h>
using namespace std;

void print_spiral(int arr[100][100],int row, int col)
{
    //Up
    int i=0,j=col-1;
    int up_row=0;
    //Down
    int down_row=row-1;
    //Right
    int k=1,l=row-2;
    int right_col=col-1;
    //Left
    int left_col=0;
    
    do{
        //For up condition
        for(int x=i;x<=j;x++)
        {
            cout<<arr[up_row][x]<<" ";
        }
        //update:
        if(up_row==down_row)
        {
            break;
        }
        
        up_row++;

        //For right condition
        for(int x=k;x<=l;x++)
        {
            cout<<arr[x][right_col]<<" ";
        }

        //For down condition
        for(int x=j;x>=i;x--)
        {
            cout<<arr[down_row][x]<<" ";
        }
        //update
        i++;
        j--;
        down_row--;

        //update:
        if(right_col==left_col)
        {
            break;
        }
       
        right_col--;
        //For for left condition
        for(int x=l;x>=k;x--)
        {
            cout<<arr[x][left_col]<<" ";
        }
        //update
        k++;
        l--;
        left_col++;

    }while((up_row<=down_row) and (right_col>=left_col) );
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[100][100]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    print_spiral(arr,4,4);
    return 0;
}
