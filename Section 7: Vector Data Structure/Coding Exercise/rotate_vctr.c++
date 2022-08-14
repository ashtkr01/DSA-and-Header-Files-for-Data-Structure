#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
      // your code goes here
      int st_row = 0, st_col =0;
      int end_row = matrix.size()-1;
      int end_col = matrix[0].size()-1;
      cout<<end_row<<endl;
      cout<<end_col<<endl;
    //   swap(matrix[0][0] , matrix[1][2]);
      while((st_row < end_row) and (st_col < end_col))
      {
          for(int i = 0;i< abs(end_col - st_col ); i++)
          {
              swap(matrix[st_row][st_col + i] , matrix[st_row + i][end_col]);
              swap(matrix[st_row][st_col + i] , matrix[end_row][end_col - i]);
              swap(matrix[st_row][st_col + i] , matrix[end_col - i][st_col]);
              cout<<"Hi"<<endl;
          }
          st_row++;
          st_col++;
          end_row--;
          end_col--;
      }
      //Print the vector:
      for(auto x : matrix)
      {
          for(auto y : x)
          {
              cout<<y<<"  ";
          }
          cout<<endl;
      }
}

//Main:
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {{5, 4, 3, 9},
                               {2, 0, 7, 6},
                               {1, 3, 4, 0},
                               {9, 8, 3, 4}};
    rotate(arr);                           
    return 0;
}
