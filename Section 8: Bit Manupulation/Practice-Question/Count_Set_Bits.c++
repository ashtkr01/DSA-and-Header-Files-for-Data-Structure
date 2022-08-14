#include <bits/stdc++.h>
using namespace std;
/********************Best Hack to Count number of bits*****************************/
int countSetBitsHack(int num)
{
    int count = 0;
    while (num > 0)
    {
        //Remove the last set bit from the current number:
        num = num & (num - 1);
        count++;
    }
    return count;
}
/**************************Count the number of bits*******************************/
int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        int bit = num & 1;
        count += bit;
        num=num >> 1;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    cout << "Number of bit present in given number :" << countSetBits(num) << endl;
    cout<<"Number of bit present in given number :"<< countSetBitsHack(num) <<endl;

    return 0;
}
