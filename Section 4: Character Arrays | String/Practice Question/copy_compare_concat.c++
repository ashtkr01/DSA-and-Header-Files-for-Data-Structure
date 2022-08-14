#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char a[1000]="Apple";
    char b[1000];

    // Strlen 
    cout<<strlen(a)<<endl;

    //Strcpy :   strcpy(destination , source);
    strcpy(b,a);

    cout<<b<<endl;

    //Compare
    cout<<strcmp(a,b)<<endl;

    //Concat the 2 string
    char web[]="www.";
    char domain[]="codingminutes.com";
    cout<<strcat(web,domain)<<endl;
    return 0;
}
