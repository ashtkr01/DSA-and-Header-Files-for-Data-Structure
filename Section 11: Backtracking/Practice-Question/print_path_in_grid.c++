#include <bits/stdc++.h>
using namespace std;
/******************************Calculate the number of path in a grid**************************/
int number_of_path(int arr[100][100] , int row, int col , int a , int b)
{
  if(a>row || b>col)
  {
      return 0;
  }
  if(a==row-1 || b==col-1)
  {
      return 1;
  } 
  return number_of_path(arr,row,col,a+1,b) + number_of_path(arr, row, col , a, b+1);
}
/*****************************************Print all the path in a grid*****************************/
void print(int arr[100][100], int m ,int n)
{
    cout << "Configuration : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void print_grid_path(int arr[100][100], int m ,int n, int curr_row, int curr_col)
{
    if(curr_row<0 or curr_col<0)
    {
        return;
    }
    if (curr_row >= m or curr_col >= n)
    {
        return;
    }
    if (curr_row == m - 1 and curr_col == n - 1)
    {
        arr[curr_row][curr_col] = 1;
        print(arr,m, n);
        arr[curr_row][curr_col] = 0;
        return;
    }
    arr[curr_row][curr_col] = 1;
    print_grid_path(arr,m, n, curr_row + 1, curr_col);
    arr[curr_row][curr_col] = 0;
    arr[curr_row][curr_col] = 1;

    print_grid_path(arr,m, n, curr_row, curr_col + 1);
    arr[curr_row][curr_col] = 0;
}
/********************************End to the function Print all the path in a grid*****************************/
int main(int argc, char const *argv[])
{
    int row,col;
    cin>>row>>col;
    int arr[100][100] = {0};
    print_grid_path(arr, row,col, 0, 0);
    print(arr,row,col);
    cout<<number_of_path(arr, row, col , 0 , 0)<<endl;
    return 0;
}
