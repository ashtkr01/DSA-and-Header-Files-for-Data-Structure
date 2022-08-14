#include<bits/stdc++.h>
using namespace std;
/******************************Approach-I***********************************/
int knapSack(int n , int weight , vector<int> wt , vector<int> price)
{
    if(weight <= 0 or n <= 0)

    {
        return 0;
    }
    int a=0;
    if(weight > wt[n-1]) //Very important condition:
    {
     a = price[n-1] + knapSack(n-1 , weight - wt[n-1] , wt , price);
    }
    int b= knapSack(n-1 , weight , wt , price);
    return max(a , b);
}

int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter the number of weight available "<<endl;
    cin>>size;
    cout<<"Maximum weight available "<<endl;
    int weight;
    cin>>weight;
    vector<int> wt(size ,0 );
    vector<int> price(size , 0);
    //Initialize the weight vector:
    for(int i=0;i<size;i++)
    {
        cin>>wt[i];
    }
    //Initialize the price vector:
    for(int i=0;i<size;i++)
    {
        cin>>price[i];
    }
    //Function call:
    cout<<knapSack(size , weight , wt , price)<<endl;
    return 0;
}
