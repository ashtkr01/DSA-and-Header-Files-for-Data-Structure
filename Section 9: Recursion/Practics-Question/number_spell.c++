#include <bits/stdc++.h>
using namespace std;

string numberSpell(int n)
{
    string str;
    if (n == 0)
    {
        return str;
    }
    str = numberSpell(n / 10);
    switch (n % 10)
    {
    case 0:
        str += "zero ";
        break;
    case 1:
        str += "one ";
        break;
    case 2:
        str += "two ";
        break;
    case 3:
        str += "three ";
        break;
    case 4:
        str += "four ";
        break;
    case 5:
        str += "five ";
        break;
    case 6:
        str += "six ";
        break;
    case 7:
        str += "seven ";
        break;
    case 8:
        str += "eight ";
        break;
    case 9:
        str += "nine ";
        break;

    default:
        break;
    }
    return str;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << numberSpell(n) << endl;

    return 0;
}
