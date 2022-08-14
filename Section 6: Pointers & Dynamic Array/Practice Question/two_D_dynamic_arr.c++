#include <bits/stdc++.h>
using namespace std;

int **create_2_DArray(int row, int col)
{
    //Array of pointer(where each pointer containe the address of each row):
    int **arr = new int *[row];

    //Allocate the memory for each row:
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    //Initialize the 2-D Array:
    int value=0;

    //Initialize:
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            arr[i][j]=value;
            value++;
        }
    }
    return arr; 
}
/*************************Main Function****************************/
int main(int argc, char const *argv[])
{
    int row,col;
    cin>>row>>col;
    int **arr=create_2_DArray(row,col);

    //Print the two D-array:
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<"  ";
            
        }
        cout<<endl;
    }
    return 0;
}
