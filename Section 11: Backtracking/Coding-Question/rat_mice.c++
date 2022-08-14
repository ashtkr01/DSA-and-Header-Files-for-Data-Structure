#include <bits/stdc++.h>
using namespace std;

bool ratAndmice(vector<vector<int>> &vctr , int row , int col , int curr_row, int curr_col)
{
 if(row-1==curr_row and col-1 == curr_col)
 {
    vctr[curr_row][curr_col]=1;
    cout<<"Hi"<<endl;
    return true;
 }
 if(curr_row < 0 or curr_row >=row or curr_col<0 or curr_col>=col)
 {
     return false;
 }
 if(vctr[curr_row][curr_col]==-1)
 {
     return false;
 }
 if(vctr[curr_row][curr_col]==1)
 {
     return false;
 }

 vctr[curr_row][curr_col]=1;
 bool res;
 res=ratAndmice(vctr, row, col , curr_row+1 , curr_col);
 if(res==true){
     return true;
 }
 vctr[curr_row][curr_col]=0;
  vctr[curr_row][curr_col]=1;
res=ratAndmice(vctr, row, col , curr_row-1 , curr_col);
 if(res==true){
     return true;
 }
 vctr[curr_row][curr_col]=0;
  vctr[curr_row][curr_col]=1;
res=ratAndmice(vctr, row, col , curr_row , curr_col+1);
 if(res==true){
     return true;
 }
 vctr[curr_row][curr_col]=0;
  vctr[curr_row][curr_col]=1;
res=ratAndmice(vctr, row, col , curr_row , curr_col-1);
 if(res==true){
     return true;
 }
  vctr[curr_row][curr_col]=0;

  return false;
}

vector<vector<int>> ratAndMice(vector<string> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    vector<vector<int>> vctr(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            char a = arr[i][j];
            if (a == 'O')
            {
                vctr[i].push_back(0);
            }
            else if(a=='X')
            {
                vctr[i].push_back(-1);
            }
        }
    }
   
    /****************************Final Function call***************************/
    bool result = ratAndmice(vctr,row,col,0,0);
    cout<<result<<endl;
    //Modify to the actual vector:
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(vctr[i][j]==-1)
            {
                vctr[i][j]=0;
            }
        }
    }
    return vctr;
}

int main(int argc, char const *argv[])
{
    vector<string> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        arr.push_back(str);
    }

    //Print the string vector:
    //  for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         char a = arr[i][j];
    //        cout<<a<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<int>> vctr;
    vctr=ratAndMice(arr);
     
      //Print the desired vector
    for(auto x: vctr)
    {
        for(auto y: x)
        {
            cout<<y<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
