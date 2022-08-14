#include<bits/stdc++.h>
using namespace std;
 /****************************Approach-1***************************************/
int getMaxArea(vector<int> hist){
     //Size of hist:
     int size = hist.size();
     //Initialization of vector:
     vector<int> vctr;
     for(int i=0;i<size;i++)
     {
         int area = 0;
         area = hist[i];
         int left = i-1;
         int right = i+1;
         while(left>=0 and hist[i] <= hist[left])
         {
             area += hist[i];
             left--;
         }

         while(right <size and hist[i] <= hist[right])
         {
             area += hist[i];
             right++;
         }
         vctr.push_back(area);
         
     }
     
     int result=vctr[0];
     for(int i=1;i<vctr.size();i++)
     {
         if(result < vctr[i])
         {
             result= vctr[i];
         }
     }
     return result;
}
//Main Function:
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> hist(n,0);

    for(int i=0;i<n;i++)
    {
        cin>>hist[i];
    }

    cout<<getMaxArea(hist)<<endl;
    return 0;
}
