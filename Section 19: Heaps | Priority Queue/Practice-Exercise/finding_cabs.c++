// Code given By myself
#include<bits/stdc++.h>
using namespace std;

class Cab{
    public:
          string str;
          int x;
          int y;
          Cab(string str , int x , int y){
              this->str=str;
              this->x=x;
              this->y=y;
          }
};

bool operator<(const Cab &c1 , const Cab &c2)
{
    float d1=sqrt((c1.x*c1.x)+(c1.y * c1.y));
    float d2=sqrt((c2.x*c2.x)+(c2.y*c2.y));

    return d1 > d2;
}

int main(int argc, char const *argv[])
{
    priority_queue<Cab> Q;
    int n , k;
    cin>>n>>k;

    while(n--)
    {
      string s;
      int x,y;
      cin>>s>>x>>y;
      // insert an object in priority_queue by using
        // the Person class constructor
      Q.push(Cab(s,x,y));
    }

    //Print :
    while(k--)
    {
        Cab a=Q.top();
        cout<<a.str<<endl;
        Q.pop();
    }
    return 0;
}
