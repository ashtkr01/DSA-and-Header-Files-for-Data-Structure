#include<bits/stdc++.h>
#include "hashtable.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Hashtable<int>  h;
	h.insert("Mango",100);
	h.insert("Apple",120);
	h.insert("Banana",140);
	h.insert("Orange",200);

    h.print();
     
    int *value=h.search("guava");
    if(value==NULL)
    {
        cout<<"Wrong Input"<<endl;
    }
    else{
        cout<<*value<<endl;
    }

    h["Mango"] = 110;
    h["Papaya"] = 70;
    h["Guava"] = 50;
    h["Orange"] += 50;
    cout<<h["Mango"]<<endl;
    cout<<h["Orange"]<<endl;
    cout<<h["Papaya"]<<endl;
    cout<<h["Guava"]<<endl;
    h.print();
   
    return 0;
}
