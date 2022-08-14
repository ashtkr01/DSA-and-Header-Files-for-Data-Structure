#include<bits/stdc++.h>
using namespace std;
//Given a sentence count the number of digit , alpha and spaces:

/**********************Function to count Digit & Spaces*****************************/
//Read one-by-one and Count: --use this approach  OR
// Store and then count :   
int main(int argc, char const *argv[])
{
    int alpha=0;
    int digit=0;
    int space=0;

    char ch=cin.get();

    while(ch!='\n')
    {
        if(ch>='0' and ch<='9')
        {
            digit++;
        }
        else if((ch>='a' and ch<'z') or (ch>='A' and ch<='Z'))
        {
            alpha++;
        }
        else if(ch==' ' or ch=='\t')
        {
            space++;
        }
        ch=cin.get();
    }
    cout<<"Total alphabets :"<<alpha<<endl;
    cout<<"Total digit :"<<digit<<endl;
    cout<<"Total space :"<<space<<endl;
    return 0;
}

