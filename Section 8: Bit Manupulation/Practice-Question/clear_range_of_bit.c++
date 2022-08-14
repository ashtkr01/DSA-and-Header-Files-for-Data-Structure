#include <bits/stdc++.h>
using namespace std;

void clearLastIBit(int &n, int i, int j)
{
    int mask1 = ((~0) << (i + 1));
    int mask2 = ~((~0) << (j));
    int mask = mask1 | mask2;
    n = n & mask;
}

void clearBitsInRange(int &n, int i, int j)
{
    int a = (~0) << (i + 1);
    int b = (1 << j) - 1;
    int mask = a | b;
    n = n & mask;
}
/******************************Main Function***************************************/
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    int num1=num;
    int i, j;
    cout << "Range of bit you want to clear " << endl;
    cin >> i >> j;
    clearLastIBit(num, i, j);
    clearBitsInRange(num1,i,j);
    cout << "Answer : " << num << endl;
    cout << "Answer : " << num1 << endl;

    return 0;
}
