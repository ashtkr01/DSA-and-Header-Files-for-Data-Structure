#include<bits/stdc++.h>
using namespace std;

/*********************Compare according to rows********************************/
bool compare_rows(pair<int ,int > x, pair<int ,int> y)
{
    return x.first<y.first;
}
/*********************Compare according to column********************************/
bool compare_columns(pair<int ,int > x, pair<int ,int> y)
{
    return x.second<y.second;
}


/*********************Defence Kingdom*************************************/
int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    //For finding the lenght of largest undefended rectangle
    sort(position.begin(),position.end(),compare_rows);
    int length=0;
    for(int i=0;i<position.size()-1;i++)
    {
        if(length<(position[i+1].first-position[i].first))
        {
            length=position[i+1].first-position[i].first;
        }
    }
    length=length-1;
    if(position[0].first-1>length)
    {
        length=position[0].first-1;
    }
     if(W-(position[position.size()-1].first)>length)
    {
        length=W-(position[position.size()-1].first);
    }
       


    //For finding the lenght of largest undefended rectangle
    sort(position.begin(),position.end(),compare_columns);
    int breadth=0;
    for(int i=0;i<position.size()-1;i++)
    {
        if(breadth<position[i+1].second-position[i].second)
        {
            breadth=position[i+1].second-position[i].second;
        }
    }
    breadth=breadth-1;
    if(position[0].second-1>breadth)
    {
        breadth=position[0].second-1;
    }
     if(H-(position[position.size()-1].second)>breadth)
    {
        breadth=H-(position[position.size()-1].second);
    }
    
       return length*breadth;
    
}
/*******************Main Function*****************************************/
int main(int argc, char const *argv[])
{   
    // vector<pair<int,int>> vctr{{3,8},{11,2},{8,6}};
    vector<pair<int,int>> vctr{{2,2}};
    cout<<defkin(4,3,vctr)<<endl;

    /* code */
    return 0;
}
