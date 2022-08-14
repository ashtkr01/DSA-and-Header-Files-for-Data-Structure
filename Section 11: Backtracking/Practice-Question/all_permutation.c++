#include<bits/stdc++.h>
using namespace std;

/*************************Permutation**************************************/
void allPermutation(char *input , int i,int size)
{  //Base Case:
    if(i==size)
    {
        cout<<input<<endl;
        return;
    }
    for(int k=i;k<size;k++)
    {   
        swap(input[i],input[k]);
        allPermutation(input,i+1,size);
        //Backtracking Step:
        swap(input[i],input[k]);
    }
}
int main(int argc, char const *argv[])
{
    char input[100];
    cin>>input;
    char output[100];
    int n = sizeof(input)/sizeof(char);
    int size=0,k=0;
   while(input[k]!='\0')
   {
       size++;
       k++;
   }
   cout<<size<<endl;
   allPermutation(input, 0 , size);
    return 0;
}
