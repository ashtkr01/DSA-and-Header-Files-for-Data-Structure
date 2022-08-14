#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    char sentence[1000];
    char largest[1000];

    int n;
    cin>>n;
    //In order to consume the next line i.e "\n" from input buffer
      cin.get(); 
         int max_len=0;
      while(n--)
      {
          cin.getline(sentence,1000);
          int len=strlen(sentence);
          if(len>max_len)
          {
              max_len=len;
              strcpy(largest,sentence);
          }
      }
      cout<<largest<<endl;
    return 0;
}
