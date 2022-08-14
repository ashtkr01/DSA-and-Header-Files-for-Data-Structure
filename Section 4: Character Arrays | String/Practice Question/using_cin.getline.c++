#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char sentence[1000];
    // Actual parameter (default parameter ) : cin.getline(character array, size of character array,'\n');
     cin.getline(sentence,1000);
     cout<<sentence<<endl;

     char paragraph[1000];
     cin.getline(paragraph,1000,'.');
     cout<<paragraph<<endl;
    return 0;
}
