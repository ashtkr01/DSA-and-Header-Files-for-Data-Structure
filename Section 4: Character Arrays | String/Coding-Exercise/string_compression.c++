#include <bits/stdc++.h>
using namespace std;
/************************************Using Space Complexity O(N) **********************************/
int compress_1(vector<char> &chars)
{
    // your code goes here
    string str;
    int length = chars.size();
    int a = 0, b = 0;
    for (int i = 0; i < length; i++)
    {
        if (b == length - 1)
        {
            str.push_back(chars[a]);
            if (a != b)
            {

                str = str + to_string(b - a + 1);
            }
            break;
        }
        if (a == b)
        {
            b++;
            continue;
        }
        else if (b > a)
        {
            if (chars[a] == chars[b])
            {
                b++;
                continue;
            }
            else if (chars[a] != chars[b])
            {
                str.push_back(chars[a]);
                if (a + 1 != b)
                {

                    str = str + to_string(b - a);
                }
                a = b;

                b++;
            }
        }
    }
    cout << str << endl;
    return str.length();
}

/************************************Using Space Complexity O(1) **********************************/
int compress(vector<char> &chars)
{
    // your code goes here
    string str;
    int length = chars.size();
    int a = 0, b = 0;
    int index=-1;
    for (int i = 0; i < length; i++)
    {
        if (b == length - 1)
        {
            chars[++index]=chars[a];
            // str.push_back(chars[a]);
            if (a != b)
            {
                 string digit=to_string(b - a + 1);
                // str = str + to_string(b - a + 1);
                for(int i=0;i<digit.length();i++)
                {
                    chars[++index]=digit[i];
                }
            }
            break;
        }
        if (a == b)
        {
            b++;
            continue;
        }
        else if (b > a)
        {
            if (chars[a] == chars[b])
            {
                b++;
                continue;
            }
            else if (chars[a] != chars[b])
            {
                chars[++index]=chars[a];
                if (a + 1 != b)
                {
                    string digit=to_string(b - a );
                // str = str + to_string(b - a + 1);
                for(int i=0;i<digit.length();i++)
                {
                    chars[++index]=digit[i];
                }
                    // str = str + to_string(b - a);
                }
                a = b;

                b++;
            }
        }
    }
    chars.erase(chars.begin()+index+1,chars.end());
    for(auto x : chars)
    {
        cout<<x;
    }
    cout<<endl;
    return index+1;
}

int main(int argc, char const *argv[])
{
    vector<char> chars{'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress_1(chars) << endl;
    cout << compress(chars) << endl;
    return 0;
}
