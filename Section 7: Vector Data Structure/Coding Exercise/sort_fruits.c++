#include<bits/stdc++.h>
using namespace std;

//Comparator on the basis of price of fruit:
bool compare_price(pair<string,int> a, pair<string, int> b)
{
  return a.second < b.second;
}
//Comparator on the basis of name of fruit:
bool compare_name(pair<string,int> a, pair<string, int> b)
{
  return a.first < b.first;
}
//Function to sort
vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    // your code  goes here
    if(S=="price")
    {
        sort(v.begin(),v.end(),compare_price);
    }
    else if(S=="name")
    {
        sort(v.begin(),v.end(),compare_name);
    }
    return v;
}

/**************Main Function*************************/
int main(int argc, char const *argv[])
{
    vector<pair<string,int>> vctr={{"Mango",100},{"Guava",70},{"Apple",60},{"Grapes",40},{"Banana",30}};
    vctr=sortFruits(vctr,"name");

    for(auto x: vctr)
    {
        cout<<"{"<<x.first<<","<<x.second<<"}"<<endl;
    }
    return 0;
}
