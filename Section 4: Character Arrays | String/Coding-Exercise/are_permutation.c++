#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    // your code goes here
    unordered_map<char,int> um;
     int length=A.length();
     for(int i=0;i<length;i++)
     {
         um[A[i]]++;
     }

     int length2=B.length();
     for(int j=0;j<length2;j++)
     {
         um[B[j]]--;
     }
     //Print:
     for(auto x: um)
     {
         if(x.second!=0)
         {
             return false;
         }
     }
     return true;
}

/********************Main Function***************************/
int main(int argc, char const *argv[])
{
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);
    cout<<arePermutation(str1,str2)<<endl;

    return 0;
}
