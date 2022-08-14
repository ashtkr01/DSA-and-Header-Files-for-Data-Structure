#include<bits/stdc++.h>
using namespace std;
//Build max Heap:
void buildMaxHeap(vector<int> &vctr , int &index , int data)
{
    vctr[index] = data;
    int temp=index;
    int parent = temp/2;
    while(temp > 1 and vctr[parent] > vctr[temp])
    {
        int temp2 = vctr[temp];
        vctr[temp] = vctr[parent] ;
        vctr[parent] = temp2;
        temp=parent;
        parent = temp/2;
    }
    index++;
}
//Heapify
void heapify(vector<int> &vctr , int current , int index)
{
    int left = 2*current;
    int right = 2*current;
     int max = current;

     if(left <= index && vctr[left] < vctr[current])
     {
         max=left;
     }

     if(right <= index && vctr[right] < vctr[current])
     {
         max=right;
     }

     if(max != current)
     {
         swap(vctr[max] , vctr[current]);
         heapify(vctr , max , index);
     }
}
//Update the heaps:
void updateHeaps(vector<int> &vctr , int data ,int index)
{
    if(vctr[1] < data)
    {
        vctr[1] =data;
       
       heapify(vctr , 1 , index);

        
    }  
}

int maxProduct(vector<int>& nums) {
    // your code goes here
   int size = nums.size();
   vector<int> vctr(3,0);
   int index=1;
   buildMaxHeap(vctr , index , nums[0]); 
   buildMaxHeap(vctr , index , nums[1]); 
   //Update 
   for(int i=2;i<size;i++)
   {
       updateHeaps(vctr , nums[i] , index);
   }
   //Print the resultant vector:
//    for(auto x : vctr)
//    {
//        cout<<x<<" ";
//    }
//    cout<<endl;
   return (vctr[1]-1)*(vctr[2]-1);
}

//Main Function:
int main(int argc, char const *argv[])
{
    vector<int> v;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    //Call to function:
    cout<<maxProduct(v)<<endl;
    return 0;
}




