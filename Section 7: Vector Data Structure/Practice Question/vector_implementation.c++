#include<iostream>
#include"vector.h"
using namespace std;



/*************************************Main Function*********************************/
int main(int argc, char const *argv[])
{  
    // Make the Character Vector:
    Vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    vc.push_back('c');
    vc.push_back('d');

    //Print the character array:
    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<endl;
    }

    //Make the integer Array:
    Vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(15);
    v.push_back(6);
    v.pop_back();

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    //Print the vector:
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    return 0;
}
