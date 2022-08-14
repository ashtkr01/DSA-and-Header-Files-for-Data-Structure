#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char const *argv[])
{
     /// Without using NULL termination
    char b[]={'C','h','e','t','a','n'};
    cout<<b<<endl;
    //Uisng NULL Termination
    char c[]={'C','h','e','t','a','n','\0'};
    cout<<c<<endl;
    char a[]="Chetan";
    cout<<a<<endl;
    char d[100];
    cin>>d;
    cout<<d<<endl;

    cout<<strlen(a)<<endl;
    cout<<sizeof(a)<<endl;

    return 0;
}
