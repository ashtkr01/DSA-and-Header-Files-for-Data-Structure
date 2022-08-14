#include<bits/stdc++.h>
using namespace std;
//Pass By value
void apply_tax(double income)
{
    float tax=0.1;
    income =income-income*tax;
}
//pass By reference: Using Reference variable
void applied_tax(double &income)
{
    float tax=0.1;
     income =income-income*tax;
}

//Pass By Reference : Using Pointer method
void watchView(int *viewPtr)
{
    *viewPtr=*viewPtr+1;
}

int main(int argc, char const *argv[])
{
    double income;
    cout<<"Enter the income :"<<endl;
    cin>>income;
    int view;
    cout<<"Enter number of views :"<<endl;
    cin>>view;
    watchView(&view);
    cout<<view<<endl;

    apply_tax(income);
    //Value after pass by value:
    cout<<income<<endl;
    applied_tax(income);
    //Value after pass by reference:
    cout<<income<<endl;
    
    return 0;
}
