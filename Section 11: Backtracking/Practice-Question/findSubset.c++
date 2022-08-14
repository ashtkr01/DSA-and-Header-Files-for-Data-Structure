#include<bits/stdc++.h>
using namespace std;

/**************************Code Reccommended by Prateek Bhaiya********************************/
void subSetFind(char a[] , char b[] , int i , int j)
{
    //Base Case
    if(a[i]=='\0')
    {
        b[j]='\0';
        cout<<b<<endl;
        return;
    }
    //Recursive Case
    //Include the ith charcater of input array
    b[j]=a[i];
    subSetFind(a,b,i+1,j+1);
    //Exclude the ith charcater of input array
    //Overwritten
    subSetFind(a,b,i+1,j);
}
/**********************************Given By Myself***************************************/
void subSet(string str ,string temp, int i)
{
    if(i==3)
    {
        cout<<temp<<endl;
        return;
    }
    subSet(str,temp+str[i],i+1);
    subSet(str,temp,i+1);
   
}
int main(int argc, char const *argv[])
{
    subSet("abc","",0);
    char a[]={'a','b','c','\0'};
    char b[100];
    subSetFind(a,b,0,0);
    return 0;
}
