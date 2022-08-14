#include<bits/stdc++.h>
using namespace std;
/******************************Knapsack Problem***********************************/
int knapsack(int i, int n ,int weight,  vector<int> weights , vector<int> price)
{
    if(i>=n or weight <=0 )
    {
        return 0;
    }
    //Include the current item only if weights[i] >= weight:
    int a=0;
    if(weights[i] <= weight)
    {
     a= price[i] + knapsack(i+1 , n , weight - weights[i] , weights , price);
    }
    int b = knapsack(i+1 , n , weight , weights , price); 

    return max(a,b);
    
}


int main(int argc, char const *argv[])
{
    int num;
    cout<<"Number of weights "<<endl;
    cin>>num;
    cout<<"Maximum weight :"<<endl;
    int weight;
    cin>>weight;
    vector<int> weights(num,0);
    vector<int> price(num,0);
    //Initialiaze the weights vector:
    for(int i=0;i<num;i++)
    {
        cin>>weights[i];
    }
    //Initialize the price vector:
    for(int i=0;i<num;i++)
    {
        cin>>price[i];
    }
  //Call to the Knapsack:
  cout<<knapsack(0,num , weight , weights , price)<<endl;


    return 0;
}
