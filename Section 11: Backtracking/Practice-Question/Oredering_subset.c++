#include<bits/stdc++.h>
using namespace std;

/**************************Comparator************************************/
bool compare(string a , string b)
{
    if(a.size()!=b.size())
    {
        return a.size() < b.size();
    }
    else {
        return a<b;
    }
}

void orderedSubSet(char *input , char *output , int i, int j , vector<string> &vctr)
{
    //Base Case
    if(input[i]=='\0')
    {
        output[j]='\0';
        string str(output);
        // string str="";
        // int k=0;
        // while(output[k]!='\0')
        // {
        //     str += output[k];
        //     k++;
        // }
        vctr.push_back(str);
        return;
    }

    //Recursive Case:
    //Include the ith character
    output[j]=input[i];
    orderedSubSet(input, output, i+1,j+1,vctr);
    //EXclude the ith character
    //Overwritten:
    orderedSubSet(input, output, i+1,j,vctr);
}
//Main 
int main(int argc, char const *argv[])
{
    // char input[] = {'a','b','c','\0'};
    char input[100];
    cin>>input;
  
    char output[100];
    vector<string> vctr;
  orderedSubSet( input , output , 0, 0 , vctr);

   sort(vctr.begin() , vctr.end() , compare);
  for(auto x : vctr)
  {
      cout<<x<<endl;
  }

    return 0;
}
