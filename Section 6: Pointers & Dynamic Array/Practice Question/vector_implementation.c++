#include<iostream>
using namespace std;

class Vector{
//Data Members:
int *arr;
int curr_size;
int max_size;


//Methods:
public:
     Vector() {
         curr_size=0;
         max_size=1;
         arr=new int[max_size];
     }

     void push_back(int d)
     {
         
     }

};

/*************************************Main Function*********************************/
int main(int argc, char const *argv[])
{
    Vector v;
    return 0;
}
