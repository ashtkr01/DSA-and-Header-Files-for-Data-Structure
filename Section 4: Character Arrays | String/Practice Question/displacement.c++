#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /*****************************First Approach**********************************/
    char direction[1000];
    char displacement[1000];
    int index=0;
    cin.getline(direction,1000);
    int length=strlen(direction);
    cout<<length<<endl;
    displacement[index]=direction[0];

    for(int i=1;i<length;i++)
    {
        if(index>=0)
        {
            if((direction[i]=='S' and displacement[index]=='N') or (direction[i]=='N' and displacement[index]=='S'))
            {
               index--;
            }
            else if((direction[i]=='E' and displacement[index]=='W') or (direction[i]=='W' and displacement[index]=='E'))
            {
              index--;
            }
            else{
                displacement[++index]=direction[i];
            }
        }
        else{
            displacement[++index]=direction[i];
        }
    }
    displacement[++index]='\0';
    cout<<displacement<<endl;
/************************************************************************************************/

/**************************Second method using the concept of Cordinates***********************/
char str[1000];
cin.getline(str,1000);
int len=strlen(str);
int x=0;
int y=0;
for(int i=0;i<len;i++)
{
    if(str[i]=='N'){
        y++;
    }
    else if(str[i]=='S'){
        y--;
    }
    else if(str[i]=='E'){
        x++;
    }
    if(str[i]=='W'){
        x--;
    }
}
if(y>0)
{
    while(y>0)
    {
        cout<<"N";
        y--;
    }
}
else if(y<0)
{
    while(y<0)
    {
        cout<<"S";
        y++;
    }
}
if(x>0)
{
    while(x>0)
    {
        cout<<"E";
        x--;
    }
}
else if(x<0)
{
    while(x<0)
    {
        cout<<"W";
        x++;
    }
}
    return 0;
}
