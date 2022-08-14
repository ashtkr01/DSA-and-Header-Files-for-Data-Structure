#include<bits/stdc++.h>
using namespace std;

//Once you hit an enter then they enter in input buffer 
int main(int argc, char const *argv[])
{
    char sentences[1000];
    int i=0;
    // Use of cin.get() :
    char temp=cin.get();
    sentences[i++]=temp;
    while(temp!='#')
    {
        cout<<temp;
        sentences[i++]=temp;
        temp=cin.get();
    }
    cout<<endl;
    cout<<sentences<<endl;
    return 0;
}
